#include "template.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Template::Template(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    template_ui(ui)
{
    connect(template_ui->templateAddFirstFile, &QPushButton::clicked, this, &Template::onTemplateAddFirstFileClicked);
    connect(template_ui->templateAddMoreFiles, &QPushButton::clicked, this, &Template::onTemplateAddMoreFilesClicked);
    connect(template_ui->templateRemoveFirstFile, &QPushButton::clicked, this, &Template::onTemplateRemoveFirstFileClicked);
    connect(template_ui->templateRemoveMoreFiles, &QPushButton::clicked, this, &Template::onTemplateRemoveMoreFilesClicked);
    connect(template_ui->templateSaveAs, &QPushButton::clicked, this, &Template::onTemplateSaveAsClicked);
    connect(template_ui->templateReset, &QPushButton::clicked, this, &Template::onTemplateResetClicked);
    connect(template_ui->templateButton, &QPushButton::clicked, this, &Template::onTemplateButtonClicked);
    connect(template_ui->templatePrefix, &QCheckBox::stateChanged, this, &Template::onTemplatePrefixClicked);
    connect(template_ui->templateIRI, &QCheckBox::stateChanged, this, &Template::onTemplateIRIClicked);
    connect(template_ui->templateError, &QCheckBox::stateChanged, this, &Template::onTemplateErrorClicked);
    connect(template_ui->templateErrorPath, &QPushButton::clicked, this, &Template::onTemplateErrorPathClicked);

    templatePrefixName = template_ui->templatePrefixName;
    templatePrefixName->hide();

    templateIRIName = template_ui->templateIRIName;
    templateIRIName->hide();

    templateErrorPath = template_ui->templateErrorPath;
    templateErrorPath->hide();

    templateErrorPathName = template_ui->templateErrorPathName;
    templateErrorPathName->hide();
}

void Template::onTemplateAddFirstFileClicked()
{
    addFirstFile();
}

void Template::onTemplateAddMoreFilesClicked()
{
    addMoreFiles();
}

void Template::onTemplateRemoveFirstFileClicked()
{
    removeFiles(template_ui->firstFile, template_firstMap);
}

void Template::onTemplateRemoveMoreFilesClicked()
{
    removeFiles(template_ui->moreFiles, template_moreMap);
}

void Template::onTemplateSaveAsClicked()
{
    saveFiles();
}

void Template::onTemplateResetClicked()
{
    resetTemplate();
}

void Template::onTemplateButtonClicked()
{
    templateFiles();
}

void Template::onTemplateErrorPathClicked()
{
    addPath();
}

void Template::addFirstFile()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open files", QDir::homePath());

    if (!filePath.isEmpty())
    {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        template_ui->templateFirstFile->clear();
        template_firstMap.clear();
        template_ui->templateFirstFile->addItem(fileName);
        template_firstMap[fileName] = fileInfo.path();
    }
}

void Template::addMoreFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            template_ui->templateMoreFiles->addItem(fileName);
            template_moreMap[fileName] = fileInfo.path();
        }
    }
}

void Template::addPath()
{
    QString directoryPath = QFileDialog::getExistingDirectory(nullptr, "Select Directory", QDir::homePath());
    if (!directoryPath.isEmpty())
    {
        template_ui->templateErrorPathName->setText(directoryPath);
    }
}

void Template::removeFiles(QListWidget* files, QMap<QString, QString> map)
{
    QListWidgetItem* selectedItem = files->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    files->takeItem(files->row(selectedItem));

    map.remove(selectedFileName);
}

void Template::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        template_ui->templateNameSave->setText(fileName);
        template_ui->templateSavePath->setText(directory);
    }
}

void Template::resetTemplate()
{
    template_firstMap.clear();
    template_moreMap.clear();
    template_ui->templateFirstFile->clear();
    template_ui->templateMoreFiles->clear();
    template_ui->templateSavePath->clear();
    template_ui->templateNameSave->clear();

    template_ui->templatePrefix->setChecked(false);
    template_ui->templateIRI->setChecked(false);
    template_ui->templateForce->setChecked(false);
    template_ui->templateError->setChecked(false);
    template_ui->templateAncestor->setChecked(false);

    template_ui->templateMerge->setCurrentIndex(0);
    template_ui->templateImportClosure->setCurrentIndex(0);
}

void Template::templateFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (template_firstMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one input ontology.");
        return;
    }
    if (template_moreMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one template file.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot Template";
    for (QString& fileName : template_firstMap.keys())
    {
        command += " -i " + template_firstMap[fileName] + "/" + fileName;
    }
    for (QString& fileName : template_moreMap.keys())
    {
        command += " --template " + template_moreMap[fileName] + "/" + fileName;
    }
    if (!getPrefix().isEmpty())
    {
        command += " --prefix \"" + getPrefix() + "\"";
    }
    if (!getIRI().isEmpty())
    {
        command += " --ontology-iri \"" + getIRI() + "\"";
    }
    if (getImportClosureIndex() == 1)
    {
        command += " --collapse-import-closure false";
    }
    if (getMergeIndex() == 1)
    {
        command += " --merge-before";
    }
    if (getMergeIndex() == 2)
    {
        command += " --merge-after";
    }
    if (template_ui->templateForce->isChecked())
    {
        command += " --force true";
    }
    if (template_ui->templateError->isChecked())
    {
        command += " --errors " + getErrorPath();
    }
    if (template_ui->templateAncestor->isChecked())
    {
        command += " --ancestors";
    }
    command += " -o " + result;

    int check = system(command.toUtf8());
    if (check != 0)
    {
        QMessageBox::warning(nullptr, "Error", "Not able to execute command.");
    }
    else
    {
        QMessageBox::warning(nullptr, "Error", "Command executed successfully.");
    }
}

void Template::onTemplatePrefixClicked(bool checked)
{
    templatePrefixName->setVisible(checked);
    templatePrefixName->clear();
}

void Template::onTemplateIRIClicked(bool checked)
{
    templateIRIName->setVisible(checked);
    templateIRIName->clear();
}

void Template::onTemplateErrorClicked(bool checked)
{
    templateErrorPath->setVisible(checked);
    templateErrorPathName->setVisible(checked);
    templateErrorPathName->clear();
}

//------------------------------- Getter methods---------------------------------
QString Template::getPrefix() const
{
    return template_ui->templatePrefixName->text();
}

QString Template::getIRI() const
{
    return template_ui->templateIRIName->text();
}

QString Template::getErrorPath() const
{
    return template_ui->templateErrorPathName->text();
}

int Template::getImportClosureIndex() const
{
    return template_ui->templateImportClosure->currentIndex();
}

int Template::getMergeIndex() const
{
    return template_ui->templateMerge->currentIndex();
}

QString Template::getSavePath() const
{
    return template_ui->templateSavePath->text();
}

QString Template::getNameSave() const
{
    return template_ui->templateNameSave->text();
}


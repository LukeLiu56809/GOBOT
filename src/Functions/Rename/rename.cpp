#include "rename.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QInputDialog>

Rename::Rename(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    rename_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(rename_ui->renameAddOntology, &QPushButton::clicked, this, &Rename::onRenameAddOntologyClicked);
    connect(rename_ui->renameAddTerm, &QPushButton::clicked, this, &Rename::onRenameAddTermClicked);
    connect(rename_ui->renameAddMappingFile, &QPushButton::clicked, this, &Rename::onRenameAddMappingFileClicked);

    connect(rename_ui->renameRemoveOntology, &QPushButton::clicked, this, &Rename::onRenameRemoveOntologyClicked);
    connect(rename_ui->renameRemoveTerm, &QPushButton::clicked, this, &Rename::onRenameRemoveTermClicked);
    connect(rename_ui->renameRemoveMappingFile, &QPushButton::clicked, this, &Rename::onRenameRemoveMappingFileClicked);

    connect(rename_ui->renamePrefixMappings, &QCheckBox::stateChanged, this, &Rename::onPrefixMappingsClicked);
    connect(rename_ui->renamePrefix, &QCheckBox::stateChanged, this, &Rename::onAddPrefixClicked);
    connect(rename_ui->renamePrefixMappingsSave, &QPushButton::clicked, this, &Rename::onPrefixMappingsSaveClicked);

    connect(rename_ui->renameSaveAs, &QPushButton::clicked, this, &Rename::onRenameSaveAsClicked);
    connect(rename_ui->renameReset, &QPushButton::clicked, this, &Rename::onRenameResetClicked);
    connect(rename_ui->renameButton, &QPushButton::clicked, this, &Rename::onRenameButtonClicked);

    renamePrefixMappingsSave = rename_ui->renamePrefixMappingsSave;
    renamePrefixMappingsSave->hide();
    renamePrefixMappingsName = rename_ui->renamePrefixMappingsName;
    renamePrefixMappingsName->hide();
    renamePrefixName = rename_ui->renamePrefixName;
    renamePrefixName->hide();
}

void Rename::onRenameAddOntologyClicked()
{
    addFiles(rename_ontologyMap, rename_ui->renameOntologyName);
}

void Rename::onRenameAddMappingFileClicked()
{
    addFiles(rename_mappingFileMap, rename_ui->renameMappingFileName);
}

void Rename::onRenameAddTermClicked()
{
    addTerms();
}

void Rename::onRenameRemoveOntologyClicked()
{
    removeFiles(rename_ontologyMap, rename_ui->renameOntologyName);
}

void Rename::onRenameRemoveMappingFileClicked()
{
    removeFiles(rename_mappingFileMap, rename_ui->renameMappingFileName);
}

void Rename::onRenameRemoveTermClicked()
{
    removeTerms();
}

void Rename::onPrefixMappingsSaveClicked()
{
    addMapping();
}

void Rename::onRenameSaveAsClicked()
{
    saveFiles();
}

void Rename::onRenameResetClicked()
{
    resetRename();
}

void Rename::onRenameButtonClicked()
{
    renameFiles();
}

void Rename::addFiles(QMap<QString, QString>& filesMap, QListWidget* files)
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open files", QDir::homePath());

    if (!filePath.isEmpty()) {
        // Rename the file name from the full path
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();

        // Clear the existing content in firstFile
        files->clear();
        filesMap.clear();

        // Append the file name to the list view box
        files->addItem(fileName);

        // Add the file name and its corresponding parent directory path to the QMap
        filesMap[fileName] = fileInfo.path();
    }
}

void Rename::addTerms()
{
    bool ok;
    QString term = QInputDialog::getText(nullptr, "Add Term", "Enter a term:", QLineEdit::Normal, "", &ok);

    if (ok && !term.isEmpty()) {
        rename_ui->renameTermName->addItem(term);
    }
    mappingTerms.append(term);
}

void Rename::addTermFiles(QString& path, QLineEdit* file)
{
    QString dialog = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!dialog.isEmpty()) {
        QFileInfo fileInfo(dialog);
        QString fileName = fileInfo.fileName();
        file->setText(fileName);

        QString directory = fileInfo.path();
        path = directory;
    }
}

void Rename::addMapping()
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!file.isEmpty()) {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        rename_ui->renamePrefixMappingsName->setText(fileName);

        QString directory = fileInfo.path();
        mappingPath = directory;
    }
}

void Rename::removeFiles(QMap<QString, QString>& filesMap, QListWidget* files)
{
    QListWidgetItem* selectedItem = files->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file/term to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    files->takeItem(files->row(selectedItem));

    // Remove the selected file name from the QMap
    filesMap.remove(selectedFileName);
}

void Rename::removeTerms()
{
    QListWidgetItem* selectedItem = rename_ui->renameTermName->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file/term to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    rename_ui->renameTermName->takeItem(rename_ui->renameTermName->row(selectedItem));

    mappingTerms.removeOne(selectedFileName);
}

void Rename::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "(*.owl);;(*.xml);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Rename the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        rename_ui->renameNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        rename_ui->renameSavePath->setText(directory);
    }
}

void Rename::resetRename()
{
    rename_ontologyMap.clear();
    rename_mappingFileMap.clear();
    mappingTerms.clear();
    rename_ui->renameOntologyName->clear();
    rename_ui->renameTermName->clear();
    rename_ui->renameMappingFileName->clear();
    rename_ui->renameNameSave->clear();
    rename_ui->renameSavePath->clear();

    rename_ui->renamePrefix->setChecked(false);
    rename_ui->renamePrefixMappings->setChecked(false);
    rename_ui->renameMissingEntities->setChecked(false);
    rename_ui->renameDuplicates->setChecked(false);
}


void Rename::renameFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (rename_ontologyMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to Rename.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    // Construct system command
    QString command = "robot Rename";
    for (QString& fileName : rename_ontologyMap.keys())
    {
        command += " -i " + rename_ontologyMap[fileName] + "/" + fileName;
    }
    for (QString& fileName : rename_mappingFileMap.keys())
    {
        command += " --mappings " + rename_mappingFileMap[fileName] + "/" + fileName;
    }
    for (QString& term : mappingTerms)
    {
        command += " --mapping " + term;
    }
    if (!getAddPrefix().isEmpty())
    {
        command += " --add-prefix \"" + getAddPrefix() + "\"";
    }
    if (!getMappingPrefix().isEmpty())
    {
        command += " --prefix-mappings " + mappingPath + "/" + getMappingPrefix();
    }
    command += " -o " + result;

    // System call
    int check = system(command.toUtf8());
    if (check != 0)
    {
        QMessageBox::warning(nullptr, "Error", "Not able to execute command.");
    }
    else
    {
        QMessageBox::warning(nullptr, "Error", "Command executed successfully.");
    }
    qDebug() << "String: " << command;
}

void Rename::onPrefixMappingsClicked(bool checked)
{
    renamePrefixMappingsSave->setVisible(checked);
    renamePrefixMappingsName->setVisible(checked);
    renamePrefixMappingsName->clear();
}

void Rename::onAddPrefixClicked(bool checked)
{
    renamePrefixName->setVisible(checked);
    renamePrefixName->clear();
}

//------------------------------- Getter methods---------------------------------
QString Rename::getSavePath() const
{
    return rename_ui->renameSavePath->text();
}

QString Rename::getNameSave() const
{
    return rename_ui->renameNameSave->text();
}

QString Rename::getAddPrefix() const
{
    return rename_ui->renamePrefixName->text();
}

QString Rename::getMappingPrefix() const
{
    return rename_ui->renamePrefixMappingsName->text();
}



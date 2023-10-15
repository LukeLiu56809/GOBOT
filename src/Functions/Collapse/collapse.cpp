#include "collapse.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Collapse::Collapse(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    collapse_ui(ui)
{
    connect(collapse_ui->collapseAddFile, &QPushButton::clicked, this, &Collapse::onCollapseAddFileClicked);
    connect(collapse_ui->collapseRemoveFile, &QPushButton::clicked, this, &Collapse::onCollapseRemoveFileClicked);
    connect(collapse_ui->collapseSaveAs, &QPushButton::clicked, this, &Collapse::onCollapseSaveAsClicked);
    connect(collapse_ui->collapseReset, &QPushButton::clicked, this, &Collapse::onCollapseResetClicked);
    connect(collapse_ui->collapseButton, &QPushButton::clicked, this, &Collapse::onCollapseButtonClicked);
    connect(collapse_ui->collapseThreshold, &QCheckBox::stateChanged, this, &Collapse::onCollapseThresholdClicked);
    connect(collapse_ui->collapsePreciousClasses, &QCheckBox::stateChanged, this, &Collapse::onCollapsePreciousClassesClicked);
    connect(collapse_ui->collapsePreciousTerms, &QCheckBox::stateChanged, this, &Collapse::onCollapsePreciousTermsClicked);
    connect(collapse_ui->collapsePreciousTermsFile, &QPushButton::clicked, this, &Collapse::onCollapsePreciousTermsFileClicked);

    collapseThresholdEdit = collapse_ui->collapseThresholdEdit;
    collapseThresholdEdit->hide();

    collapsePreciousClassesEdit = collapse_ui->collapsePreciousClassesEdit;
    collapsePreciousClassesEdit->hide();

    collapsePreciousTermsEdit = collapse_ui->collapsePreciousTermsEdit;
    collapsePreciousTermsEdit->hide();

    collapsePreciousTermsFile = collapse_ui->collapsePreciousTermsFile;
    collapsePreciousTermsFile->hide();
}

void Collapse::onCollapseAddFileClicked()
{
    addFiles();
}

void Collapse::onCollapseRemoveFileClicked()
{
    removeFiles();
}

void Collapse::onCollapseSaveAsClicked()
{
    saveFiles();
}

void Collapse::onCollapseResetClicked()
{
    resetCollapse();
}

void Collapse::onCollapseButtonClicked()
{
    collapseFiles();
}

void Collapse::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            collapse_ui->collapseFileNames->addItem(fileName);
            collapse_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Collapse::removeFiles()
{
    QListWidgetItem* selectedItem = collapse_ui->collapseFileNames->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    collapse_ui->collapseFileNames->takeItem(collapse_ui->collapseFileNames->row(selectedItem));

    collapse_filesMap.remove(selectedFileName);
}

void Collapse::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        collapse_ui->collapseNameSave->setText(fileName);
        collapse_ui->collapseSavePath->setText(directory);
    }
}

void Collapse::resetCollapse()
{
    collapse_ui->collapseThreshold->setChecked(false);
    collapse_ui->collapsePreciousClasses->setChecked(false);
    collapse_ui->collapsePreciousTerms->setChecked(false);

    collapse_filesMap.clear();
    collapse_ui->collapseFileNames->clear();

    collapse_ui->collapseNameSave->clear();
    collapse_ui->collapseSavePath->clear();
    collapse_ui->collapseThresholdEdit->setValue(0);
    collapse_ui->collapsePreciousClassesEdit->clear();
    collapse_ui->collapsePreciousTermsEdit->clear();
}


void Collapse::collapseFiles()
{
    QString selectedFilePath = collapse_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (collapse_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to collapse.");
        return;
    }
    if (getThreshold().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Enter a threshold value.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to collapse.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot collapse \\\n"
                                                 " -i " + getSelectedFileName() + " \\\n"
                                                 " --threshold " + getThreshold() + " \\\n ";
    if (!getPreciousClasses().isEmpty())
    {
        command += "--precious " + getPreciousClasses() + " \\\n";
    }
    if (!getPreciousTerms().isEmpty())
    {
        command += "--precious-terms " + termPath + "/" + getPreciousTerms() + " \\\n";
    }
    command += " -o " + result;

    int check = system(command.toUtf8());
    if (check != 0)
    {
        QMessageBox::warning(nullptr, "Error", "Not able to execute command.");
    }
    else
    {
        QMessageBox::information(nullptr, "Success", "Command executed successfully.");
    }
}

void Collapse::onCollapseThresholdClicked(bool checked)
{
    collapseThresholdEdit->setVisible(checked);
}

void Collapse::onCollapsePreciousClassesClicked(bool checked)
{
    collapse_ui->collapsePreciousClassesEdit->setVisible(checked);

    if (checked)
    {
        collapse_ui->collapsePreciousTerms->setChecked(false);
        collapse_ui->collapsePreciousTermsEdit->clear();
    }
    else
    {
        collapse_ui->collapsePreciousClassesEdit->clear();
    }
}

void Collapse::onCollapsePreciousTermsClicked(bool checked)
{
    collapse_ui->collapsePreciousTermsFile->setVisible(checked);
    collapse_ui->collapsePreciousTermsEdit->setVisible(checked);

    if (checked)
    {
        collapse_ui->collapsePreciousClasses->setChecked(false);
        collapse_ui->collapsePreciousClassesEdit->clear();
    }
    else
    {
        collapse_ui->collapsePreciousTermsEdit->clear();
    }
}

void Collapse::onCollapsePreciousTermsFileClicked()
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!file.isEmpty())
    {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        collapse_ui->collapsePreciousTermsEdit->setText(fileName);
        QString directory = fileInfo.path();
        termPath = directory;
    }
}

//------------------------------- Getter methods---------------------------------
QString Collapse::getThreshold() const
{
    return collapse_ui->collapseThresholdEdit->text();
}

QString Collapse::getPreciousClasses() const
{
    return collapse_ui->collapsePreciousClassesEdit->text();
}

QString Collapse::getPreciousTerms() const
{
    return collapse_ui->collapsePreciousTermsEdit->text();
}

QString Collapse::getSavePath() const
{
    return collapse_ui->collapseSavePath->text();
}

QString Collapse::getNameSave() const
{
    return collapse_ui->collapseNameSave->text();
}

QString Collapse::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = collapse_ui->collapseFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}


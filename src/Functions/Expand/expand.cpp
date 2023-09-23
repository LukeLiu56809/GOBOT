#include "expand.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Expand::Expand(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    expand_ui(ui)
{
    connect(expand_ui->expandAddFile, &QPushButton::clicked, this, &Expand::onExpandAddFileClicked);
    connect(expand_ui->expandRemoveFile, &QPushButton::clicked, this, &Expand::onExpandRemoveFileClicked);
    connect(expand_ui->expandSaveAs, &QPushButton::clicked, this, &Expand::onExpandSaveAsClicked);
    connect(expand_ui->expandReset, &QPushButton::clicked, this, &Expand::onExpandResetClicked);
    connect(expand_ui->expandButton, &QPushButton::clicked, this, &Expand::onExpandButtonClicked);
    connect(expand_ui->expandTermFile, &QCheckBox::stateChanged, this, &Expand::onExpandTermFile);
    connect(expand_ui->expandNoTermFile, &QCheckBox::stateChanged, this, &Expand::onExpandNoTermFile);
    connect(expand_ui->expandTermSave, &QCheckBox::clicked, this, &Expand::onExpandTermFileSaveClicked);
    connect(expand_ui->expandNoTermSave, &QCheckBox::clicked, this, &Expand::onExpandNoTermFileSaveClicked);

    expandTermSaveName = expand_ui->expandTermSaveName;
    expandTermSaveName->hide();

    expandTermsFile = expand_ui->expandTermSave;
    expandTermsFile->hide();

    expandNoTermSaveName = expand_ui->expandNoTermSaveName;
    expandNoTermSaveName->hide();

    expandNoTermsFile = expand_ui->expandNoTermSave;
    expandNoTermsFile->hide();
}

void Expand::onExpandAddFileClicked()
{
    addFiles();
}

void Expand::onExpandRemoveFileClicked()
{
    removeFiles();
}

void Expand::onExpandSaveAsClicked()
{
    saveFiles();
}

void Expand::onExpandResetClicked()
{
    resetExpand();
}

void Expand::onExpandButtonClicked()
{
    expandFiles();
}

void Expand::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            expand_ui->expandFileNames->addItem(fileName);
            expand_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Expand::removeFiles()
{
    QListWidgetItem* selectedItem = expand_ui->expandFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    expand_ui->expandFileNames->takeItem(expand_ui->expandFileNames->row(selectedItem));

    expand_filesMap.remove(selectedFileName);
}

void Expand::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        expand_ui->expandNameSave->setText(fileName);
        expand_ui->expandSavePath->setText(directory);
    }
}

void Expand::resetExpand()
{
    expand_ui->expandTermFile->setChecked(false);
    expand_ui->expandNoTermFile->setChecked(false);
    expand_ui->expandAnnotateExpansion->setChecked(false);

    expand_filesMap.clear();
    expand_ui->expandFileNames->clear();

    expand_ui->expandNameSave->clear();
    expand_ui->expandSavePath->clear();
    expand_ui->expandTermSaveName->clear();
    expand_ui->expandNoTermSaveName->clear();
    expand_ui->expandTerm->clear();
}


void Expand::expandFiles()
{
    QString selectedFilePath = expand_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (expand_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to Expand.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to Expand.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot expand -i " + getSelectedFileName();
    if (!getTerm().isEmpty())
    {
        command += " --expand-term " + getTerm();
    }
    if (!getTermFile().isEmpty())
    {
        command += " --expand-term-file " + termPath + "/" + getTermFile();
    }
    if (!getNoTermFile().isEmpty())
    {
        command += " --no-expand-term-file " + noTermPath + "/" + getNoTermFile();
    }
    if (expand_ui->expandAnnotateExpansion->isChecked())
    {
        command += " --annotate-expansion-axioms true";
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

void Expand::onExpandTermFile(bool checked)
{
    expand_ui->expandTermSave->setVisible(checked);
    expand_ui->expandTermSaveName->setVisible(checked);
    expand_ui->expandTermSaveName->clear();
}

void Expand::onExpandNoTermFile(bool checked)
{
    expand_ui->expandNoTermSave->setVisible(checked);
    expand_ui->expandNoTermSaveName->setVisible(checked);
    expand_ui->expandNoTermSaveName->clear();
}

void Expand::onExpandTermFileSaveClicked()
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!file.isEmpty()) {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        expand_ui->expandTermSaveName->setText(fileName);
        QString directory = fileInfo.path();
        termPath = directory;
    }
}

void Expand::onExpandNoTermFileSaveClicked()
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!file.isEmpty()) {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        expand_ui->expandNoTermSaveName->setText(fileName);
        QString directory = fileInfo.path();
        noTermPath = directory;
    }
}

//------------------------------- Getter methods---------------------------------

QString Expand::getTerm() const
{
    return expand_ui->expandTerm->text();
}

QString Expand::getTermFile() const
{
    return expand_ui->expandTermSaveName->text();
}

QString Expand::getNoTermFile() const
{
    return expand_ui->expandNoTermSaveName->text();
}

QString Expand::getSavePath() const
{
    return expand_ui->expandSavePath->text();
}

QString Expand::getNameSave() const
{
    return expand_ui->expandNameSave->text();
}

QString Expand::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = expand_ui->expandFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}


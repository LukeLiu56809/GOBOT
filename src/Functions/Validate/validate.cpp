#include "validate.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Validate::Validate(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    validate_ui(ui)
{
    connect(validate_ui->validateAddFile, &QPushButton::clicked, this, &Validate::onValidateAddFileClicked);
    connect(validate_ui->validateRemoveFile, &QPushButton::clicked, this, &Validate::onValidateRemoveFileClicked);
    connect(validate_ui->validateSaveAs, &QPushButton::clicked, this, &Validate::onValidateSaveAsClicked);
    connect(validate_ui->validateReset, &QPushButton::clicked, this, &Validate::onValidateResetClicked);
    connect(validate_ui->validateButton, &QPushButton::clicked, this, &Validate::onValidateButtonClicked);
}

void Validate::onValidateAddFileClicked()
{
    addFiles();
}

void Validate::onValidateRemoveFileClicked()
{
    removeFiles();
}

void Validate::onValidateSaveAsClicked()
{
    saveFiles();
}

void Validate::onValidateResetClicked()
{
    resetValidate();
}

void Validate::onValidateButtonClicked()
{
    validateFiles();
}

void Validate::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            validate_ui->validateFileNames->addItem(fileName);
            validate_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Validate::removeFiles()
{
    QListWidgetItem* selectedItem = validate_ui->validateFileNames->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    validate_ui->validateFileNames->takeItem(validate_ui->validateFileNames->row(selectedItem));

    validate_filesMap.remove(selectedFileName);
}

void Validate::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        validate_ui->validateNameSave->setText(fileName);
        validate_ui->validateSavePath->setText(directory);
    }
}

void Validate::resetValidate()
{
    validate_filesMap.clear();
    validate_ui->validateFileNames->clear();
    validate_ui->validateNameSave->clear();
    validate_ui->validateSavePath->clear();
    validate_ui->validateProfile->setCurrentIndex(0);
}

void Validate::validateFiles()
{
    QString selectedFilePath = validate_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (validate_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to validate.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to validate.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot validate-profile " +
                      "--profile "  + getProfile() + " -i " +
                      getSelectedFileName() +
                      " -o " + result;

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

//------------------------------- Getter methods---------------------------------
QString Validate::getSavePath() const
{
    return validate_ui->validateSavePath->text();
}

QString Validate::getNameSave() const
{
    return validate_ui->validateNameSave->text();
}

QString Validate::getProfile() const
{
    return validate_ui->validateProfile->currentText();
}

QString Validate::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = validate_ui->validateFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

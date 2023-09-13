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
    // Connect the signals from the UI buttons to the appropriate slots
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

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            validate_ui->validateFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
            validate_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Validate::removeFiles()
{
    QListWidgetItem* selectedItem = validate_ui->validateFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    validate_ui->validateFileNames->takeItem(validate_ui->validateFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    validate_filesMap.remove(selectedFileName);
}

void Validate::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        validate_ui->validateNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
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
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to validate.");
        return;
    }

    // Construct system command
    QString command = "cd " + selectedFilePath + " && robot validate-profile " +
                      "--profile "  + getProfile() + " -i " +
                      getSelectedFileName() +
                      " -o " + result;

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

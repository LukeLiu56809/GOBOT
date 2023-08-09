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
    // Connect the signals from the UI buttons to the appropriate slots
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
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            expand_ui->expandFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
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

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    expand_ui->expandFileNames->takeItem(expand_ui->expandFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    expand_filesMap.remove(selectedFileName);
}

void Expand::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        expand_ui->expandNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        expand_ui->expandSavePath->setText(directory);
    }
}

void Expand::resetExpand()
{
    // Uncheck the checkboxes
    expand_ui->expandTermFile->setChecked(false);
    expand_ui->expandNoTermFile->setChecked(false);

    // Clear the QMap and clear the list view box
    expand_filesMap.clear();
    expand_ui->expandFileNames->clear();

    // Clear the QLineEdit widgets
    expand_ui->expandNameSave->clear();
    expand_ui->expandSavePath->clear();
    expand_ui->expandTermSaveName->clear();
    expand_ui->expandNoTermSaveName->clear();
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

    // Construct system command
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

    // System call
    QByteArray commandStr = command.toLatin1();
    const char *commandStr_2 = commandStr.data();
    int check = system(commandStr_2);
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


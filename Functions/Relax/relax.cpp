#include "relax.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Relax::Relax(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    relax_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(relax_ui->relaxAddFile, &QPushButton::clicked, this, &Relax::onRelaxAddFileClicked);
    connect(relax_ui->relaxRemoveFile, &QPushButton::clicked, this, &Relax::onRelaxRemoveFileClicked);
    connect(relax_ui->relaxSaveAs, &QPushButton::clicked, this, &Relax::onRelaxSaveAsClicked);
    connect(relax_ui->relaxReset, &QPushButton::clicked, this, &Relax::onRelaxResetClicked);
    connect(relax_ui->relaxButton, &QPushButton::clicked, this, &Relax::onRelaxButtonClicked);
}

void Relax::onRelaxAddFileClicked()
{
    addFiles();
}

void Relax::onRelaxRemoveFileClicked()
{
    removeFiles();
}

void Relax::onRelaxSaveAsClicked()
{
    saveFiles();
}

void Relax::onRelaxResetClicked()
{
    resetRelax();
}

void Relax::onRelaxButtonClicked()
{
    relaxFiles();
}

void Relax::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            relax_ui->relaxFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
            relax_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Relax::removeFiles()
{
    QListWidgetItem* selectedItem = relax_ui->relaxFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    relax_ui->relaxFileNames->takeItem(relax_ui->relaxFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    relax_filesMap.remove(selectedFileName);
}

void Relax::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files;;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        relax_ui->relaxNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        relax_ui->relaxSavePath->setText(directory);
    }
}

void Relax::resetRelax()
{
    relax_filesMap.clear();
    relax_ui->relaxFileNames->clear();
    relax_ui->relaxNameSave->clear();
    relax_ui->relaxSavePath->clear();
}

void Relax::relaxFiles()
{
    QString selectedFilePath = relax_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (relax_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to relax.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to relax.");
        return;
    }

    // Construct system command
    QString command = "cd " + selectedFilePath + " && robot relax --input " +
                      getSelectedFileName() +
                      " --output " + result;

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


//------------------------------- Getter methods---------------------------------
QString Relax::getSavePath() const
{
    return relax_ui->relaxSavePath->text();
}

QString Relax::getNameSave() const
{
    return relax_ui->relaxNameSave->text();
}

QString Relax::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = relax_ui->relaxFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

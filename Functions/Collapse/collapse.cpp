#include "collapse.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Collapse::Collapse(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    c_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(c_ui->collapseAddFile, &QPushButton::clicked, this, &Collapse::onCollapseAddFileClicked);
    connect(c_ui->collapseRemoveFile, &QPushButton::clicked, this, &Collapse::onCollapseRemoveFileClicked);
    connect(c_ui->collapseSaveAs, &QPushButton::clicked, this, &Collapse::onCollapseSaveAsClicked);
    connect(c_ui->collapseReset, &QPushButton::clicked, this, &Collapse::onCollapseResetClicked);
    connect(c_ui->collapseButton, &QPushButton::clicked, this, &Collapse::onCollapseButtonClicked);
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

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            c_ui->collapseFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
            c_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Collapse::removeFiles()
{
    QListWidgetItem* selectedItem = c_ui->collapseFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    c_ui->collapseFileNames->takeItem(c_ui->collapseFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    c_filesMap.remove(selectedFileName);
}

void Collapse::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        c_ui->collapseNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        c_ui->collapseSavePath->setText(directory);
    }
}

void Collapse::resetCollapse()
{
    c_filesMap.clear();
    c_ui->collapseFileNames->clear();
    c_ui->collapseNameSave->clear();
    c_ui->collapseThreshold->clear();
    c_ui->collapseSavePath->clear();
}

void Collapse::collapseFiles()
{
    // Check if c_filesMap has at least one element
    if (c_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to collapse.");
        return;
    }

    // Check if the user entered in a threshold value
    if (getThreshold().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Enter a threshold value.");
        return;
    }

    // Construct output file
    QString result = getSavePath() + "/" + getNameSave();

    // Check if user chose a resultant directory
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    // Check if the user selected a file in the list view widget
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to collapse.");
        return;
    }

    // Use the file name to get the corresponding file path from the c_filesMap
    QString selectedFilePath = c_filesMap.value(getSelectedFileName());

    // Construct system command
    QString command = "cd " + selectedFilePath + " && robot collapse \\\n"
                                                 " --input " + getSelectedFileName() + " \\\n"
                                                " --threshold " + getThreshold() + " \\\n"
                                         " --output " + result;

    // Convert command from QString to char*
    QByteArray commandStr = command.toLatin1();
    const char *commandStr_2 = commandStr.data();

    // Call system with the char* command
    int check = system(commandStr_2);

    // Check the return value of the system function to see if the command was executed successfully
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
QString Collapse::getThreshold() const
{
    return c_ui->collapseThreshold->text();
}

QString Collapse::getSavePath() const
{
    return c_ui->collapseSavePath->text();
}

QString Collapse::getNameSave() const
{
    return c_ui->collapseNameSave->text();
}

QString Collapse::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = c_ui->collapseFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

#include "mirror.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Mirror::Mirror(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    mirror_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(mirror_ui->mirrorAddFile, &QPushButton::clicked, this, &Mirror::onMirrorAddFileClicked);
    connect(mirror_ui->mirrorRemoveFile, &QPushButton::clicked, this, &Mirror::onMirrorRemoveFileClicked);
    connect(mirror_ui->mirrorSaveAs, &QPushButton::clicked, this, &Mirror::onMirrorSaveAsClicked);
    connect(mirror_ui->mirrorReset, &QPushButton::clicked, this, &Mirror::onMirrorResetClicked);
    connect(mirror_ui->mirrorButton, &QPushButton::clicked, this, &Mirror::onMirrorButtonClicked);
}

void Mirror::onMirrorAddFileClicked()
{
    addFiles();
}

void Mirror::onMirrorRemoveFileClicked()
{
    removeFiles();
}

void Mirror::onMirrorSaveAsClicked()
{
    saveFiles();
}

void Mirror::onMirrorResetClicked()
{
    resetMirror();
}

void Mirror::onMirrorButtonClicked()
{
    mirrorFiles();
}

void Mirror::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            mirror_ui->mirrorFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
            mirror_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Mirror::removeFiles()
{
    QListWidgetItem* selectedItem = mirror_ui->mirrorFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    mirror_ui->mirrorFileNames->takeItem(mirror_ui->mirrorFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    mirror_filesMap.remove(selectedFileName);
}

void Mirror::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "(*.owl);;(*.xml);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        mirror_ui->mirrorNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        mirror_ui->mirrorSavePath->setText(directory);
    }
}

void Mirror::resetMirror()
{
    mirror_filesMap.clear();
    mirror_ui->mirrorFileNames->clear();
    mirror_ui->mirrorNameSave->clear();
    mirror_ui->mirrorSavePath->clear();
}

void Mirror::mirrorFiles()
{
    QString selectedFilePath = mirror_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (mirror_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to mirror.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to mirror.");
        return;
    }

    // Construct system command
    QString command = "cd " + selectedFilePath + " && robot mirror -i " + getSelectedFileName() + " \\\n"
                                                 " --directory " + getSavePath() + " \\\n"
                                                 " -o " + result;

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
QString Mirror::getSavePath() const
{
    return mirror_ui->mirrorSavePath->text();
}

QString Mirror::getNameSave() const
{
    return mirror_ui->mirrorNameSave->text();
}

QString Mirror::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = mirror_ui->mirrorFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

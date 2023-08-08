#include "merge.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Merge::Merge(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    merge_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(merge_ui->mergeAddFile, &QPushButton::clicked, this, &Merge::onMergeAddFileClicked);
    connect(merge_ui->mergeRemoveFile, &QPushButton::clicked, this, &Merge::onMergeRemoveFileClicked);
    connect(merge_ui->mergeSaveAs, &QPushButton::clicked, this, &Merge::onMergeSaveAsClicked);
    connect(merge_ui->mergeReset, &QPushButton::clicked, this, &Merge::onMergeResetClicked);
    connect(merge_ui->mergeButton, &QPushButton::clicked, this, &Merge::onMergeButtonClicked);
}

void Merge::onMergeAddFileClicked()
{
    addFiles();
}

void Merge::onMergeRemoveFileClicked()
{
    removeFiles();
}

void Merge::onMergeSaveAsClicked()
{
    saveFiles();
}

void Merge::onMergeResetClicked()
{
    resetMerge();
}

void Merge::onMergeButtonClicked()
{
    mergeFiles();
}

void Merge::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            merge_ui->mergeFileNames->addItem(fileName);

            // Add the file name and its corresponding parent directory path to the QMap
            merge_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Merge::removeFiles()
{
    QListWidgetItem* selectedItem = merge_ui->mergeFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    merge_ui->mergeFileNames->takeItem(merge_ui->mergeFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    merge_filesMap.remove(selectedFileName);
}

void Merge::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        merge_ui->mergeNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        merge_ui->mergeSavePath->setText(directory);
    }
}

void Merge::resetMerge()
{
    merge_filesMap.clear();
    merge_ui->mergeFileNames->clear();
    merge_ui->mergeNameSave->clear();
    merge_ui->mergeSavePath->clear();
    merge_ui->mergeImportClosure->setCurrentIndex(0);
    merge_ui->mergeOntologyAnnotations->setCurrentIndex(0);
}

void Merge::mergeFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (merge_filesMap.size() < 2)
    {
        QMessageBox::warning(nullptr, "Error", "You need at least two files to merge.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    // Construct system command
    QString command = "robot merge";
    for (QString& fileName : merge_filesMap.keys())
    {
        command += " -i " + merge_filesMap[fileName] + "/" + fileName;
    }
    if (getImportClosureIndex() == 1)
    {
        command += " --collapse-import-closure false";
    }
    if (getOntologyAnnotationsIndex() == 1)
    {
        command += " --include-annotations true";
    }
    command += " -o " + result;

    // System call
    int check = system(command.toUtf8());
    if (check != 0)
    {
        qDebug() << "Error executing system command.";
        QMessageBox::warning(nullptr, "Error", "Not able to execute command.");
    }
    else
    {
        QMessageBox::warning(nullptr, "Error", "Command executed successfully.");
    }

    qDebug() << "String:" << command;
}

//------------------------------- Getter methods---------------------------------
QString Merge::getSavePath() const
{
    return merge_ui->mergeSavePath->text();
}

QString Merge::getNameSave() const
{
    return merge_ui->mergeNameSave->text();
}

int Merge::getImportClosureIndex() const
{
    return merge_ui->mergeImportClosure->currentIndex();
}

int Merge::getOntologyAnnotationsIndex() const
{
    return merge_ui->mergeOntologyAnnotations->currentIndex();
}

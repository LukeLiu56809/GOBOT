#include "merge.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Merge::Merge(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    m_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(m_ui->mergeAddFile, &QPushButton::clicked, this, &Merge::onMergeAddFileClicked);
    connect(m_ui->mergeRemoveFile, &QPushButton::clicked, this, &Merge::onMergeRemoveFileClicked);
    connect(m_ui->mergeSaveAs, &QPushButton::clicked, this, &Merge::onMergeSaveAsClicked);
    connect(m_ui->mergeReset, &QPushButton::clicked, this, &Merge::onMergeResetClicked);
    connect(m_ui->mergeButton, &QPushButton::clicked, this, &Merge::onMergeButtonClicked);
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
            m_ui->mergeFileNames->addItem(fileName);

            // Add the file name and its corresponding parent directory path to the QMap
            m_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Merge::removeFiles()
{
    QListWidgetItem* selectedItem = m_ui->mergeFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    m_ui->mergeFileNames->takeItem(m_ui->mergeFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    m_filesMap.remove(selectedFileName);
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
        m_ui->mergeNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        m_ui->mergeSavePath->setText(directory);
    }
}

void Merge::resetMerge()
{
    m_filesMap.clear();
    m_ui->mergeFileNames->clear();
    m_ui->mergeNameSave->clear();
    m_ui->mergeSavePath->clear();
}

void Merge::mergeFiles()
{
    // Construct output file
    QString result = getSavePath() + "/" + getNameSave();

    // Check if m_filesMap has less than 2 elements
    if (m_filesMap.size() < 2)
    {
        QMessageBox::warning(nullptr, "Error", "You need at least two files to merge.");
        return;
    }

    // Check if user chose a resultant directory
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    // Construct system command
    QStringList arguments;
    arguments << "merge";

    for (const QString& name : m_filesMap.keys()) {
        arguments << "--input" << name;
    }

    arguments << "--output" << result;

    // Convert arguments to a command string
    QString command = "cd " + m_filesMap.first() + " && robot " + arguments.join(" ");

    // Call system with the command
    int check = system(command.toUtf8());

    // Check the return value of the system function to see if the command was executed successfully
    if (check != 0)
    {
        qDebug() << "Error executing system command.";
        QMessageBox::warning(nullptr, "Error", "Not able to execute command.");
    }
    else
    {
        QMessageBox::warning(nullptr, "Error", "Command executed successfully.");
    }

    qDebug() << "Command string:" << command;
}

//------------------------------- Getter methods---------------------------------
QString Merge::getSavePath() const
{
    return m_ui->mergeSavePath->text();
}

QString Merge::getNameSave() const
{
    return m_ui->mergeNameSave->text();
}

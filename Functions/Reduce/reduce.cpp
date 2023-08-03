#include "reduce.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Reduce::Reduce(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    reduce_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(reduce_ui->reduceAddFile, &QPushButton::clicked, this, &Reduce::onReduceAddFileClicked);
    connect(reduce_ui->reduceRemoveFile, &QPushButton::clicked, this, &Reduce::onReduceRemoveFileClicked);
    connect(reduce_ui->reduceSaveAs, &QPushButton::clicked, this, &Reduce::onReduceSaveAsClicked);
    connect(reduce_ui->reduceReset, &QPushButton::clicked, this, &Reduce::onReduceResetClicked);
    connect(reduce_ui->reduceButton, &QPushButton::clicked, this, &Reduce::onReduceButtonClicked);
}

void Reduce::onReduceAddFileClicked()
{
    addFiles();
}

void Reduce::onReduceRemoveFileClicked()
{
    removeFiles();
}

void Reduce::onReduceSaveAsClicked()
{
    saveFiles();
}

void Reduce::onReduceResetClicked()
{
    resetReduce();
}

void Reduce::onReduceButtonClicked()
{
    reduceFiles();
}

void Reduce::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            reduce_ui->reduceFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
            reduce_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Reduce::removeFiles()
{
    QListWidgetItem* selectedItem = reduce_ui->reduceFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    reduce_ui->reduceFileNames->takeItem(reduce_ui->reduceFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    reduce_filesMap.remove(selectedFileName);
}

void Reduce::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files;;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        reduce_ui->reduceNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        reduce_ui->reduceSavePath->setText(directory);
    }
}

void Reduce::resetReduce()
{
    reduce_filesMap.clear();
    reduce_ui->reduceFileNames->clear();
    reduce_ui->reduceNameSave->clear();
    reduce_ui->reduceSavePath->clear();
    reduce_ui->reducePreserveAxioms->setChecked(false);
    reduce_ui->reduceIgnoreClasses->setChecked(false);
}

void Reduce::reduceFiles()
{
    QString selectedFilePath = reduce_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (reduce_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to reduce.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to reduce.");
        return;
    }

    // Construct system command
    QString command = "cd " + selectedFilePath + " && robot reduce --input " +
                      getSelectedFileName();
    if (reduce_ui->reducePreserveAxioms->isChecked())
    {
        command += " --preserve-annotated-axioms true";
    }
    if (reduce_ui->reduceIgnoreClasses->isChecked())
    {
        command += " --named-classes-only true";
    }
    command += " --output " + result;

    // System Call
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
QString Reduce::getSavePath() const
{
    return reduce_ui->reduceSavePath->text();
}

QString Reduce::getNameSave() const
{
    return reduce_ui->reduceNameSave->text();
}

QString Reduce::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = reduce_ui->reduceFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

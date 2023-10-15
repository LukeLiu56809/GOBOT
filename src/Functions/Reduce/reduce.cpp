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

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            reduce_ui->reduceFileNames->addItem(fileName);
            reduce_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Reduce::removeFiles()
{
    QListWidgetItem* selectedItem = reduce_ui->reduceFileNames->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    reduce_ui->reduceFileNames->takeItem(reduce_ui->reduceFileNames->row(selectedItem));

    reduce_filesMap.remove(selectedFileName);
}

void Reduce::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        reduce_ui->reduceNameSave->setText(fileName);
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
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to reduce.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot reduce -i " +
                      getSelectedFileName();
    if (reduce_ui->reducePreserveAxioms->isChecked())
    {
        command += " --preserve-annotated-axioms true";
    }
    if (reduce_ui->reduceIgnoreClasses->isChecked())
    {
        command += " --named-classes-only true";
    }
    command += " -o " + result;

    int check = system(command.toUtf8());
    if (check != 0)
    {
        QMessageBox::warning(nullptr, "Error", "Not able to execute command.");
    }
    else
    {
        QMessageBox::information(nullptr, "Success", "Command executed successfully.");
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

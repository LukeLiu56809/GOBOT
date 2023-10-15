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

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            relax_ui->relaxFileNames->addItem(fileName);
            relax_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Relax::removeFiles()
{
    QListWidgetItem* selectedItem = relax_ui->relaxFileNames->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    relax_ui->relaxFileNames->takeItem(relax_ui->relaxFileNames->row(selectedItem));

    relax_filesMap.remove(selectedFileName);
}

void Relax::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        relax_ui->relaxNameSave->setText(fileName);
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
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to relax.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot relax -i " +
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

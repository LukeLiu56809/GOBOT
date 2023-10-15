#include "unmerge.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Unmerge::Unmerge(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    unmerge_ui(ui)
{
    connect(unmerge_ui->unmergeAddFirstFile, &QPushButton::clicked, this, &Unmerge::onUnmergeAddFirstFileClicked);
    connect(unmerge_ui->unmergeAddMoreFiles, &QPushButton::clicked, this, &Unmerge::onUnmergeAddMoreFilesClicked);
    connect(unmerge_ui->unmergeRemoveFirstFile, &QPushButton::clicked, this, &Unmerge::onUnmergeRemoveFirstFileClicked);
    connect(unmerge_ui->unmergeRemoveMoreFiles, &QPushButton::clicked, this, &Unmerge::onUnmergeRemoveMoreFilesClicked);
    connect(unmerge_ui->unmergeSaveAs, &QPushButton::clicked, this, &Unmerge::onUnmergeSaveAsClicked);
    connect(unmerge_ui->unmergeReset, &QPushButton::clicked, this, &Unmerge::onUnmergeResetClicked);
    connect(unmerge_ui->unmergeButton, &QPushButton::clicked, this, &Unmerge::onUnmergeButtonClicked);
}

void Unmerge::onUnmergeAddFirstFileClicked()
{
    addFirstFile();
}

void Unmerge::onUnmergeAddMoreFilesClicked()
{
    addMoreFiles();
}

void Unmerge::onUnmergeRemoveFirstFileClicked()
{
    removeFiles(unmerge_ui->firstFile, unmerge_firstMap);
}

void Unmerge::onUnmergeRemoveMoreFilesClicked()
{
    removeFiles(unmerge_ui->moreFiles, unmerge_moreMap);
}

void Unmerge::onUnmergeSaveAsClicked()
{
    saveFiles();
}

void Unmerge::onUnmergeResetClicked()
{
    resetUnmerge();
}

void Unmerge::onUnmergeButtonClicked()
{
    unmergeFiles();
}

void Unmerge::addFirstFile()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open files", QDir::homePath());

    if (!filePath.isEmpty())
    {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        unmerge_ui->firstFile->clear();
        unmerge_firstMap.clear();
        unmerge_ui->firstFile->addItem(fileName);
        unmerge_firstMap[fileName] = fileInfo.path();
    }
}

void Unmerge::addMoreFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            unmerge_ui->moreFiles->addItem(fileName);
            unmerge_moreMap[fileName] = fileInfo.path();
        }
    }
}

void Unmerge::removeFiles(QListWidget* list, QMap<QString, QString> map)
{
    QListWidgetItem* selectedItem = list->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    list->takeItem(list->row(selectedItem));

    map.remove(selectedFileName);
}

void Unmerge::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        unmerge_ui->unmergeNameSave->setText(fileName);
        unmerge_ui->unmergeSavePath->setText(directory);
    }
}

void Unmerge::resetUnmerge()
{
    unmerge_firstMap.clear();
    unmerge_moreMap.clear();
    unmerge_ui->firstFile->clear();
    unmerge_ui->moreFiles->clear();
    unmerge_ui->unmergeSavePath->clear();
    unmerge_ui->unmergeNameSave->clear();
}

void Unmerge::unmergeFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (unmerge_firstMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one ontology to unmerge.");
        return;
    }
    if (unmerge_moreMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file that specifies what axioms are to be removed.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot unmerge";
    for (QString& fileName : unmerge_firstMap.keys())
    {
        command += " -i " + unmerge_firstMap[fileName] + "/" + fileName;
    }
    for (QString& fileName : unmerge_moreMap.keys())
    {
        command += " -i " + unmerge_moreMap[fileName] + "/" + fileName;
    }
    command += " -o " + result;

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
QString Unmerge::getSavePath() const
{
    return unmerge_ui->unmergeSavePath->text();
}

QString Unmerge::getNameSave() const
{
    return unmerge_ui->unmergeNameSave->text();
}


#include "remove.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QInputDialog>

Remove::Remove(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    remove_ui(ui)
{
    connect(remove_ui->removeAddOntology, &QPushButton::clicked, this, &Remove::onRemoveAddOntologyClicked);
    connect(remove_ui->removeGeneralAddTerm, &QPushButton::clicked, this, &Remove::onRemoveGeneralAddTermClicked);
    connect(remove_ui->removeExcludeAddTerm, &QPushButton::clicked, this, &Remove::onRemoveExcludeAddTermClicked);
    connect(remove_ui->removeIncludeAddTerm, &QPushButton::clicked, this, &Remove::onRemoveIncludeAddTermClicked);
    connect(remove_ui->removeGeneralAddTermFile, &QPushButton::clicked, this, &Remove::onRemoveGeneralAddTermFileClicked);
    connect(remove_ui->removeExcludeAddTermFile, &QPushButton::clicked, this, &Remove::onRemoveExcludeAddTermFileClicked);
    connect(remove_ui->removeIncludeAddTermFile, &QPushButton::clicked, this, &Remove::onRemoveIncludeAddTermFileClicked);

    connect(remove_ui->removeRemoveOntology, &QPushButton::clicked, this, &Remove::onRemoveRemoveOntologyClicked);
    connect(remove_ui->removeGeneralRemoveTerm, &QPushButton::clicked, this, &Remove::onRemoveGeneralRemoveTermClicked);
    connect(remove_ui->removeExcludeRemoveTerm, &QPushButton::clicked, this, &Remove::onRemoveExcludeRemoveTermClicked);
    connect(remove_ui->removeIncludeRemoveTerm, &QPushButton::clicked, this, &Remove::onRemoveIncludeRemoveTermClicked);
    connect(remove_ui->removeGeneralRemoveTermFile, &QPushButton::clicked, this, &Remove::onRemoveGeneralRemoveTermFileClicked);
    connect(remove_ui->removeExcludeRemoveTermFile, &QPushButton::clicked, this, &Remove::onRemoveExcludeRemoveTermFileClicked);
    connect(remove_ui->removeIncludeRemoveTermFile, &QPushButton::clicked, this, &Remove::onRemoveIncludeRemoveTermFileClicked);

    connect(remove_ui->removeSaveAs, &QPushButton::clicked, this, &Remove::onRemoveSaveAsClicked);
    connect(remove_ui->removeReset, &QPushButton::clicked, this, &Remove::onRemoveResetClicked);
    connect(remove_ui->removeButton, &QPushButton::clicked, this, &Remove::onRemoveButtonClicked);
}

void Remove::onRemoveAddOntologyClicked()
{
    addImport();
}

void Remove::onRemoveGeneralAddTermClicked()
{
    addTerms(remove_ui->removeGeneralTermName, generalTerms);
}

void Remove::onRemoveExcludeAddTermClicked()
{
    addTerms(remove_ui->removeExcludeTermName, excludeTerms);
}

void Remove::onRemoveIncludeAddTermClicked()
{
    addTerms(remove_ui->removeIncludeTermName, includeTerms);
}

void Remove::onRemoveGeneralAddTermFileClicked()
{
    addTermFiles(generalTermFileMap, remove_ui->removeGeneralFileName);
}

void Remove::onRemoveExcludeAddTermFileClicked()
{
    addTermFiles(excludeTermFileMap, remove_ui->removeExcludeFileName);
}

void Remove::onRemoveIncludeAddTermFileClicked()
{
    addTermFiles(includeTermFileMap, remove_ui->removeIncludeFileName);
}

void Remove::onRemoveRemoveOntologyClicked()
{
    removeFiles(remove_filesMap, remove_ui->removeOntologyName);
}

void Remove::onRemoveGeneralRemoveTermClicked()
{
    removeTerms(remove_ui->removeGeneralTermName, generalTerms);
}

void Remove::onRemoveExcludeRemoveTermClicked()
{
    removeTerms(remove_ui->removeExcludeTermName, excludeTerms);
}

void Remove::onRemoveIncludeRemoveTermClicked()
{
    removeTerms(remove_ui->removeIncludeTermName, includeTerms);
}

void Remove::onRemoveGeneralRemoveTermFileClicked()
{
    removeFiles(generalTermFileMap, remove_ui->removeGeneralFileName);
}

void Remove::onRemoveExcludeRemoveTermFileClicked()
{
    removeFiles(excludeTermFileMap, remove_ui->removeExcludeFileName);
}

void Remove::onRemoveIncludeRemoveTermFileClicked()
{
    removeFiles(includeTermFileMap, remove_ui->removeIncludeFileName);
}

void Remove::onRemoveSaveAsClicked()
{
    saveFiles();
}

void Remove::onRemoveResetClicked()
{
    resetRemove();
}

void Remove::onRemoveButtonClicked()
{
    removeFiles();
}

void Remove::addImport()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open files", QDir::homePath());

    if (!filePath.isEmpty())
    {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        remove_ui->removeOntologyName->clear();
        remove_filesMap.clear();
        remove_ui->removeOntologyName->addItem(fileName);
        remove_filesMap[fileName] = fileInfo.path();
    }
}

void Remove::addTerms(QListWidget *listWidget, QList<QString> &termsList)
{
    bool ok;
    QString term = QInputDialog::getText(nullptr, "Add Term", "Enter a term:", QLineEdit::Normal, "", &ok);

    if (ok && !term.isEmpty())
    {
        listWidget->addItem(term);
        termsList.append(term);
    }
}

void Remove::addTermFiles(QMap<QString, QString>& filesMap, QListWidget* files)
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            files->addItem(fileName);
            filesMap[fileName] = fileInfo.path();
        }
    }
}

void Remove::removeFiles(QMap<QString, QString>& filesMap, QListWidget* files)
{
    QListWidgetItem* selectedItem = files->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    files->takeItem(files->row(selectedItem));

    filesMap.remove(selectedFileName);
}

void Remove::removeTerms(QListWidget *listWidget, QList<QString> &termsList)
{
    QListWidgetItem* selectedItem = listWidget->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a term to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    listWidget->takeItem(listWidget->row(selectedItem));

    termsList.removeOne(selectedFileName);
}

void Remove::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        remove_ui->removeNameSave->setText(fileName);
        remove_ui->removeSavePath->setText(directory);
    }
}

void Remove::resetRemove()
{
    remove_filesMap.clear();
    generalTermFileMap.clear();
    excludeTermFileMap.clear();
    includeTermFileMap.clear();
    generalTerms.clear();
    excludeTerms.clear();
    includeTerms.clear();
    remove_ui->removeOntologyName->clear();
    remove_ui->removeGeneralTermName->clear();
    remove_ui->removeExcludeTermName->clear();
    remove_ui->removeIncludeTermName->clear();
    remove_ui->removeGeneralFileName->clear();
    remove_ui->removeExcludeFileName->clear();
    remove_ui->removeIncludeFileName->clear();
    remove_ui->removeNameSave->clear();
    remove_ui->removeSavePath->clear();

    remove_ui->removeSignature->setCurrentIndex(0);
    remove_ui->removeTrim->setCurrentIndex(0);
}


void Remove::removeFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (remove_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one ontology to remove from.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot remove";
    for (QString& fileName : remove_filesMap.keys())
    {
        command += " -i " + remove_filesMap[fileName] + "/" + fileName;
    }
    if (!generalTermFileMap.isEmpty())
    {
        for (QString& fileName : generalTermFileMap.keys())
        {
            command += " --term-file " + generalTermFileMap[fileName] + "/" + fileName;
        }
    }
    if (!generalTerms.isEmpty())
    {
        for (QString& fileName : generalTerms)
        {
            command += " --term " + fileName;
        }
    }
    if (!excludeTermFileMap.isEmpty())
    {
        for (QString& fileName : excludeTermFileMap.keys())
        {
            command += " --exclude-terms " + excludeTermFileMap[fileName] + "/" + fileName;
        }
    }
    if (!excludeTerms.isEmpty())
    {
        for (QString& fileName : excludeTerms)
        {
            command += " --exclude-term " + fileName;
        }
    }
    if (!includeTermFileMap.isEmpty())
    {
        for (QString& fileName : includeTermFileMap.keys())
        {
            command += " --include-terms " + includeTermFileMap[fileName] + "/" + fileName;
        }
    }
    if (!includeTerms.isEmpty())
    {
        for (QString& fileName : includeTerms)
        {
            command += " --include-term " + fileName;
        }
    }
    if (remove_ui->removeSignature->currentIndex() == 1)
    {
        command += " --signature true";
    }
    if (remove_ui->removeTrim->currentIndex() == 1)
    {
        command += " --trim false";
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
QString Remove::getSavePath() const
{
    return remove_ui->removeSavePath->text();
}

QString Remove::getNameSave() const
{
    return remove_ui->removeNameSave->text();
}


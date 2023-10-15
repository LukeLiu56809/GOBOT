#include "filter.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QInputDialog>

Filter::Filter(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    filter_ui(ui)
{
    connect(filter_ui->filterAddOntology, &QPushButton::clicked, this, &Filter::onFilterAddOntologyClicked);
    connect(filter_ui->filterGeneralAddTerm, &QPushButton::clicked, this, &Filter::onFilterGeneralAddTermClicked);
    connect(filter_ui->filterExcludeAddTerm, &QPushButton::clicked, this, &Filter::onFilterExcludeAddTermClicked);
    connect(filter_ui->filterIncludeAddTerm, &QPushButton::clicked, this, &Filter::onFilterIncludeAddTermClicked);
    connect(filter_ui->filterGeneralAddTermFile, &QPushButton::clicked, this, &Filter::onFilterGeneralAddTermFileClicked);
    connect(filter_ui->filterExcludeAddTermFile, &QPushButton::clicked, this, &Filter::onFilterExcludeAddTermFileClicked);
    connect(filter_ui->filterIncludeAddTermFile, &QPushButton::clicked, this, &Filter::onFilterIncludeAddTermFileClicked);

    connect(filter_ui->filterRemoveOntology, &QPushButton::clicked, this, &Filter::onFilterRemoveOntologyClicked);
    connect(filter_ui->filterGeneralRemoveTerm, &QPushButton::clicked, this, &Filter::onFilterGeneralRemoveTermClicked);
    connect(filter_ui->filterExcludeRemoveTerm, &QPushButton::clicked, this, &Filter::onFilterExcludeRemoveTermClicked);
    connect(filter_ui->filterIncludeRemoveTerm, &QPushButton::clicked, this, &Filter::onFilterIncludeRemoveTermClicked);
    connect(filter_ui->filterGeneralRemoveTermFile, &QPushButton::clicked, this, &Filter::onFilterGeneralRemoveTermFileClicked);
    connect(filter_ui->filterExcludeRemoveTermFile, &QPushButton::clicked, this, &Filter::onFilterExcludeRemoveTermFileClicked);
    connect(filter_ui->filterIncludeRemoveTermFile, &QPushButton::clicked, this, &Filter::onFilterIncludeRemoveTermFileClicked);

    connect(filter_ui->filterSaveAs, &QPushButton::clicked, this, &Filter::onFilterSaveAsClicked);
    connect(filter_ui->filterReset, &QPushButton::clicked, this, &Filter::onFilterResetClicked);
    connect(filter_ui->filterButton, &QPushButton::clicked, this, &Filter::onFilterButtonClicked);
}

void Filter::onFilterAddOntologyClicked()
{
    addImport();
}

void Filter::onFilterGeneralAddTermClicked()
{
    addTerms(filter_ui->filterGeneralTermName, generalTerms);
}

void Filter::onFilterExcludeAddTermClicked()
{
    addTerms(filter_ui->filterExcludeTermName, excludeTerms);
}

void Filter::onFilterIncludeAddTermClicked()
{
    addTerms(filter_ui->filterIncludeTermName, includeTerms);
}

void Filter::onFilterGeneralAddTermFileClicked()
{
    addTermFiles(generalTermFileMap, filter_ui->filterGeneralFileName);
}

void Filter::onFilterExcludeAddTermFileClicked()
{
    addTermFiles(excludeTermFileMap, filter_ui->filterExcludeFileName);
}

void Filter::onFilterIncludeAddTermFileClicked()
{
    addTermFiles(includeTermFileMap, filter_ui->filterIncludeFileName);
}

void Filter::onFilterRemoveOntologyClicked()
{
    removeFiles(filter_filesMap, filter_ui->filterOntologyName);
}

void Filter::onFilterGeneralRemoveTermClicked()
{
    removeTerms(filter_ui->filterGeneralTermName, generalTerms);
}

void Filter::onFilterExcludeRemoveTermClicked()
{
    removeTerms(filter_ui->filterExcludeTermName, excludeTerms);
}

void Filter::onFilterIncludeRemoveTermClicked()
{
    removeTerms(filter_ui->filterIncludeTermName, includeTerms);
}

void Filter::onFilterGeneralRemoveTermFileClicked()
{
    removeFiles(generalTermFileMap, filter_ui->filterGeneralFileName);
}

void Filter::onFilterExcludeRemoveTermFileClicked()
{
    removeFiles(excludeTermFileMap, filter_ui->filterExcludeFileName);
}

void Filter::onFilterIncludeRemoveTermFileClicked()
{
    removeFiles(includeTermFileMap, filter_ui->filterIncludeFileName);
}

void Filter::onFilterSaveAsClicked()
{
    saveFiles();
}

void Filter::onFilterResetClicked()
{
    resetFilter();
}

void Filter::onFilterButtonClicked()
{
    filterFiles();
}

void Filter::addImport()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open files", QDir::homePath());

    if (!filePath.isEmpty())
    {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        filter_ui->filterOntologyName->clear();
        filter_filesMap.clear();
        filter_ui->filterOntologyName->addItem(fileName);
        filter_filesMap[fileName] = fileInfo.path();
    }
}

void Filter::addTerms(QListWidget *listWidget, QList<QString> &termsList)
{
    bool ok;
    QString term = QInputDialog::getText(nullptr, "Add Term", "Enter a term:", QLineEdit::Normal, "", &ok);

    if (ok && !term.isEmpty())
    {
        listWidget->addItem(term);
        termsList.append(term);
    }
}

void Filter::addTermFiles(QMap<QString, QString>& filesMap, QListWidget* files)
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

void Filter::removeFiles(QMap<QString, QString>& filesMap, QListWidget* files)
{
    QListWidgetItem* selectedItem = files->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to Filter.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    files->takeItem(files->row(selectedItem));

    filesMap.remove(selectedFileName);
}

void Filter::removeTerms(QListWidget *listWidget, QList<QString> &termsList)
{
    QListWidgetItem* selectedItem = listWidget->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a term to Filter.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    listWidget->takeItem(listWidget->row(selectedItem));

    termsList.removeOne(selectedFileName);
}

void Filter::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        filter_ui->filterNameSave->setText(fileName);
        filter_ui->filterSavePath->setText(directory);
    }
}

void Filter::resetFilter()
{
    filter_filesMap.clear();
    generalTermFileMap.clear();
    excludeTermFileMap.clear();
    includeTermFileMap.clear();
    generalTerms.clear();
    excludeTerms.clear();
    includeTerms.clear();
    filter_ui->filterOntologyName->clear();
    filter_ui->filterGeneralTermName->clear();
    filter_ui->filterExcludeTermName->clear();
    filter_ui->filterIncludeTermName->clear();
    filter_ui->filterGeneralFileName->clear();
    filter_ui->filterExcludeFileName->clear();
    filter_ui->filterIncludeFileName->clear();
    filter_ui->filterNameSave->clear();
    filter_ui->filterSavePath->clear();

    filter_ui->filterSignature->setCurrentIndex(0);
    filter_ui->filterTrim->setCurrentIndex(0);
}


void Filter::filterFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (filter_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one ontology to filter from.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot filter";
    for (QString& fileName : filter_filesMap.keys())
    {
        command += " -i " + filter_filesMap[fileName] + "/" + fileName;
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
    if (filter_ui->filterSignature->currentIndex() == 1)
    {
        command += " --signature true";
    }
    if (filter_ui->filterTrim->currentIndex() == 1)
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
        QMessageBox::information(nullptr, "Success", "Command executed successfully.");
    }
}
//------------------------------- Getter methods---------------------------------
QString Filter::getSavePath() const
{
    return filter_ui->filterSavePath->text();
}

QString Filter::getNameSave() const
{
    return filter_ui->filterNameSave->text();
}


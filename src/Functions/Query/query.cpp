#include "query.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Query::Query(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    query_ui(ui)
{
    connect(query_ui->querySaveAs, &QPushButton::clicked, this, &Query::onQuerySaveAsClicked);
    connect(query_ui->queryReset, &QPushButton::clicked, this, &Query::onQueryResetClicked);
    connect(query_ui->queryButton, &QPushButton::clicked, this, &Query::onQueryButtonClicked);

    connect(query_ui->queryAddOntology, &QCheckBox::clicked, this, &Query::onQueryAddOntologyClicked);
    connect(query_ui->queryAddQuery, &QCheckBox::clicked, this, &Query::onQueryAddQueryClicked);
    connect(query_ui->queryAddUpdate, &QCheckBox::clicked, this, &Query::onQueryAddUpdateClicked);

    connect(query_ui->queryRemoveOntology, &QPushButton::clicked, this, &Query::onQueryRemoveOntologyClicked);
    connect(query_ui->queryRemoveQuery, &QPushButton::clicked, this, &Query::onQueryRemoveQueryClicked);
    connect(query_ui->queryRemoveUpdate, &QPushButton::clicked, this, &Query::onQueryRemoveUpdateClicked);

    connect(query_ui->queryCatalogSave, &QCheckBox::clicked, this, &Query::onQueryCatalogSaveClicked);
    connect(query_ui->queryTDBDirectory, &QCheckBox::clicked, this, &Query::onQueryTDBDirectoryClicked);
    connect(query_ui->queryCreateTDB, &QCheckBox::clicked, this, &Query::onQueryCreateTDBClicked);
    connect(query_ui->queryCatalog, &QCheckBox::stateChanged, this, &Query::onCatalogClicked);

    queryCatalogSave = query_ui->queryCatalogSave;
    queryCatalogSave->hide();
    queryCatalogSaveName = query_ui->queryCatalogSaveName;
    queryCatalogSaveName->hide();
}

void Query::onQueryAddOntologyClicked()
{
    addFiles(ontology_filesMap, query_ui->queryOntologyName);
}

void Query::onQueryAddQueryClicked()
{
    addFiles(query_filesMap, query_ui->queryQueryName);
}

void Query::onQueryAddUpdateClicked()
{
    addUpdates();
}

void Query::onQueryCatalogSaveClicked()
{
    addCatalog();
}

void Query::onQueryTDBDirectoryClicked()
{
    queryDirectory(query_ui->queryTDBDirectoryName);
}

void Query::onQueryCreateTDBClicked()
{
    createTDBDirectory();
}

void Query::onQueryRemoveOntologyClicked()
{
    removeFiles(ontology_filesMap, query_ui->queryOntologyName);
}

void Query::onQueryRemoveQueryClicked()
{
    removeFiles(query_filesMap, query_ui->queryQueryName);
}

void Query::onQueryRemoveUpdateClicked()
{
    removeFiles(updates_filesMap, query_ui->queryUpdateName);
}

void Query::onQuerySaveAsClicked()
{
    saveFiles();
}

void Query::onQueryResetClicked()
{
    resetQuery();
}

void Query::onQueryButtonClicked()
{
    queryFiles();
}

void Query::addFiles(QMap<QString, QString>& filesMap, QListWidget* file)
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open files", QDir::homePath());

    if (!filePath.isEmpty())
    {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        file->clear();
        filesMap.clear();
        file->addItem(fileName);
        filesMap[fileName] = fileInfo.path();
    }
}

void Query::addCatalog()
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath(), "(*.xml)");
    if (!file.isEmpty())
    {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        query_ui->queryCatalogSaveName->setText(fileName);

        QString directory = fileInfo.path();
        catalogPath = directory;
    }
}

void Query::queryDirectory(QLineEdit* line)
{
    QString directory = QFileDialog::getExistingDirectory(nullptr, "Choose Directory", QDir::homePath());

    if (!directory.isEmpty())
    {
        line->setText(directory);
    }
}

void Query::createTDBDirectory()
{
    if (ontology_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to create a TDB directory.");
        return;
    }

    QString command = "robot query";
    for (QString& fileName : ontology_filesMap.keys())
    {
        command += " -i " + ontology_filesMap[fileName] + "/" + fileName;
    }
    command += " --create-tdb true";

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

void Query::addUpdates()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath(), "(*.ru)");

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            query_ui->queryUpdateName->addItem(fileName);
            updates_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Query::removeFiles(QMap<QString, QString>& filesMap, QListWidget* file)
{
    QListWidgetItem* selectedItem = file->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    file->takeItem(file->row(selectedItem));

    filesMap.remove(selectedFileName);
}

void Query::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        query_ui->queryNameSave->setText(fileName);
        query_ui->querySavePath->setText(directory);
    }
}

void Query::resetQuery()
{
    ontology_filesMap.clear();
    query_filesMap.clear();
    updates_filesMap.clear();
    query_ui->queryOntologyName->clear();
    query_ui->queryQueryName->clear();
    query_ui->queryUpdateName->clear();
    query_ui->queryNameSave->clear();
    query_ui->querySavePath->clear();
    query_ui->queryTDBDirectoryName->clear();

    query_ui->queryUseGraphs->setChecked(false);
    query_ui->queryCatalog->setChecked(false);
    query_ui->queryTemporaryFile->setChecked(false);
    query_ui->queryTDB->setChecked(false);
    query_ui->queryKeepTDB->setChecked(false);
    query_ui->rightCatalog->setChecked(false);
}

void Query::queryFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot query";
    for (QString& fileName : ontology_filesMap.keys())
    {
        command += " -i " + ontology_filesMap[fileName] + "/" + fileName;
    }
    if (query_ui->queryTDB->isChecked())
    {
        command += " --tdb true";
    }
    if (query_ui->queryKeepTDB->isChecked())
    {
        command += " --keep-tdb-mappings true";
    }
    if (!getQueryTDBDirectoryName().isEmpty())
    {
        command += " --tdb-directory " + getQueryTDBDirectoryName();
    }
    if (query_ui->queryUseGraphs->isChecked())
    {
        command += " --use-graphs true";
    }
    if (!getCatalog().isEmpty())
    {
        command += " --catalog " + catalogPath + "/" + getCatalog();
    }
    for (QString& fileName : query_filesMap.keys())
    {
        command += " --queries " + query_filesMap[fileName] + "/" + fileName;
    }
    for (QString& fileName : updates_filesMap.keys())
    {
        command += " --update " + updates_filesMap[fileName] + "/" + fileName;
    }
    if (query_ui->queryTemporaryFile->isChecked())
    {
        command += " --temporary-file true";
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

void Query::onCatalogClicked(bool checked)
{
    queryCatalogSave->setVisible(checked);
    queryCatalogSaveName->setVisible(checked);
    query_ui->queryCatalogSaveName->clear();
}

//------------------------------- Getter methods---------------------------------
QString Query::getCatalog() const
{
    return query_ui->queryCatalogSaveName->text();
}

QString Query::getQueryTDBDirectoryName() const
{
    return query_ui->queryTDBDirectoryName->text();
}

QString Query::getSavePath() const
{
    return query_ui->querySavePath->text();
}

QString Query::getNameSave() const
{
    return query_ui->queryNameSave->text();
}





#include "extract.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QInputDialog>

Extract::Extract(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    extract_ui(ui)
{
    connect(extract_ui->extractAddOntology, &QPushButton::clicked, this, &Extract::onExtractAddOntologyClicked);
    connect(extract_ui->extractAddTerm, &QPushButton::clicked, this, &Extract::onExtractAddTermClicked);
    connect(extract_ui->extractAddTermFile, &QPushButton::clicked, this, &Extract::onExtractAddTermFileClicked);

    connect(extract_ui->extractRemoveOntology, &QPushButton::clicked, this, &Extract::onExtractRemoveOntologyClicked);
    connect(extract_ui->extractRemoveTerm, &QPushButton::clicked, this, &Extract::onExtractRemoveTermClicked);
    connect(extract_ui->extractRemoveTermFile, &QPushButton::clicked, this, &Extract::onExtractRemoveTermFileClicked);

    connect(extract_ui->extractSaveAs, &QPushButton::clicked, this, &Extract::onExtractSaveAsClicked);
    connect(extract_ui->extractReset, &QPushButton::clicked, this, &Extract::onExtractResetClicked);
    connect(extract_ui->extractButton, &QPushButton::clicked, this, &Extract::onExtractButtonClicked);

    connect(extract_ui->extractUpperTerm, &QCheckBox::stateChanged, this, &Extract::onUpperTermClicked);
    connect(extract_ui->extractLowerTerm, &QCheckBox::stateChanged, this, &Extract::onLowerTermClicked);
    connect(extract_ui->extractBranchTerm, &QCheckBox::stateChanged, this, &Extract::onBranchTermClicked);
    connect(extract_ui->extractUpperTermFile, &QCheckBox::stateChanged, this, &Extract::onUpperTermFileClicked);
    connect(extract_ui->extractLowerTermFile, &QCheckBox::stateChanged, this, &Extract::onLowerTermFileClicked);
    connect(extract_ui->extractBranchTermFile, &QCheckBox::stateChanged, this, &Extract::onBranchTermFileClicked);
    connect(extract_ui->extractPrefix, &QCheckBox::stateChanged, this, &Extract::onPrefixClicked);
    connect(extract_ui->extractSourceMap, &QCheckBox::stateChanged, this, &Extract::onSourceMapClicked);

    connect(extract_ui->extractUpperTermFileSave, &QPushButton::clicked, this, &Extract::onUpperTermFileSaveClicked);
    connect(extract_ui->extractLowerTermFileSave, &QPushButton::clicked, this, &Extract::onLowerTermFileSaveClicked);
    connect(extract_ui->extractBranchTermFileSave, &QPushButton::clicked, this, &Extract::onBranchTermFileSaveClicked);
    connect(extract_ui->extractSourceMapSave, &QPushButton::clicked, this, &Extract::onSourceMapSaveClicked);

    extractUpperTermName = extract_ui->extractUpperTermName;
    extractUpperTermName->hide();
    extractLowerTermName = extract_ui->extractLowerTermName;
    extractLowerTermName->hide();
    extractBranchTermName = extract_ui->extractBranchTermName;
    extractBranchTermName->hide();
    extractUpperTermFileSave = extract_ui->extractUpperTermFileSave;
    extractUpperTermFileSave->hide();
    extractUpperTermFileName = extract_ui->extractUpperTermFileName;
    extractUpperTermFileName->hide();
    extractLowerTermFileSave = extract_ui->extractLowerTermFileSave;
    extractLowerTermFileSave->hide();
    extractLowerTermFileName = extract_ui->extractLowerTermFileName;
    extractLowerTermFileName->hide();
    extractBranchTermFileSave = extract_ui->extractBranchTermFileSave;
    extractBranchTermFileSave->hide();
    extractBranchTermFileSaveName = extract_ui->extractBranchTermFileSaveName;
    extractBranchTermFileSaveName->hide();
    extractPrefixName = extract_ui->extractPrefixName;
    extractPrefixName->hide();
    extractSourceMapSave = extract_ui->extractSourceMapSave;
    extractSourceMapSave->hide();
    extractSourceMapSaveName = extract_ui->extractSourceMapSaveName;
    extractSourceMapSaveName->hide();
}

void Extract::onExtractAddOntologyClicked()
{
    addFiles(extract_ontologyMap, extract_ui->extractOntologyName);
}

void Extract::onExtractAddTermFileClicked()
{
    addFiles(extract_termFileMap, extract_ui->extractTermFileName);
}

void Extract::onExtractAddTermClicked()
{
    addTerms();
}

void Extract::onExtractRemoveOntologyClicked()
{
    removeFiles(extract_ontologyMap, extract_ui->extractOntologyName);
}

void Extract::onExtractRemoveTermFileClicked()
{
    removeFiles(extract_termFileMap, extract_ui->extractTermFileName);
}

void Extract::onExtractRemoveTermClicked()
{
    removeTerms();
}

void Extract::onUpperTermFileSaveClicked()
{
    addTermFiles(upperFilePath, extractUpperTermFileName);
}

void Extract::onLowerTermFileSaveClicked()
{
    addTermFiles(lowerFilePath, extractLowerTermFileName);
}

void Extract::onBranchTermFileSaveClicked()
{
    addTermFiles(branchFilePath, extractBranchTermFileSaveName);
}

void Extract::onSourceMapSaveClicked()
{
    addTermFiles(sourceMapFilePath, extractSourceMapSaveName);
}

void Extract::onExtractSaveAsClicked()
{
    saveFiles();
}

void Extract::onExtractResetClicked()
{
    resetExtract();
}

void Extract::onExtractButtonClicked()
{
    extractFiles();
}

void Extract::addFiles(QMap<QString, QString>& filesMap, QListWidget* files)
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open files", QDir::homePath());

    if (!filePath.isEmpty())
    {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        files->clear();
        filesMap.clear();
        files->addItem(fileName);
        filesMap[fileName] = fileInfo.path();
    }
}

void Extract::addTerms()
{
    bool ok;
    QString term = QInputDialog::getText(nullptr, "Add Term", "Enter a term:", QLineEdit::Normal, "", &ok);

    if (ok && !term.isEmpty())
    {
        extract_ui->extractTermName->addItem(term);
    }

    extractTerms.append(term);
}

void Extract::addTermFiles(QString& path, QLineEdit* file)
{
    QString dialog = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!dialog.isEmpty())
    {
        QFileInfo fileInfo(dialog);
        QString fileName = fileInfo.fileName();
        file->setText(fileName);

        QString directory = fileInfo.path();
        path = directory;
    }
}

void Extract::removeFiles(QMap<QString, QString>& filesMap, QListWidget* files)
{
    QListWidgetItem* selectedItem = files->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file/term to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    files->takeItem(files->row(selectedItem));

    filesMap.remove(selectedFileName);
}

void Extract::removeTerms()
{
    QListWidgetItem* selectedItem = extract_ui->extractTermName->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file/term to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    extract_ui->extractTermName->takeItem(extract_ui->extractTermName->row(selectedItem));

    extractTerms.removeOne(selectedFileName);
}

void Extract::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        extract_ui->extractNameSave->setText(fileName);
        extract_ui->extractSavePath->setText(directory);
    }
}

void Extract::resetExtract()
{
    extract_ontologyMap.clear();
    extract_termFileMap.clear();
    extractTerms.clear();
    extract_ui->extractOntologyName->clear();
    extract_ui->extractTermName->clear();
    extract_ui->extractTermFileName->clear();
    extract_ui->extractNameSave->clear();
    extract_ui->extractSavePath->clear();

    extract_ui->extractMethods->setCurrentIndex(0);

    extract_ui->extractUpperTerm->setChecked(false);
    extract_ui->extractLowerTerm->setChecked(false);
    extract_ui->extractBranchTerm->setChecked(false);
    extract_ui->extractUpperTermFile->setChecked(false);
    extract_ui->extractLowerTermFile->setChecked(false);
    extract_ui->extractBranchTermFile->setChecked(false);
    extract_ui->extractIndividualsDefinitions->setChecked(false);
    extract_ui->extractIndividualsExclude->setChecked(false);
    extract_ui->extractIndividualsMinimal->setChecked(false);
    extract_ui->extractIntermediatesMinimal->setChecked(false);
    extract_ui->extractIntermediatesNone->setChecked(false);
    extract_ui->extractExcludeOntology->setChecked(false);
    extract_ui->extractIncludeAnnotations->setChecked(false);
    extract_ui->extractAnnotateExtract->setChecked(false);
    extract_ui->extractForce->setChecked(false);
    extract_ui->extractPrefix->setChecked(false);
    extract_ui->extractSourceMap->setChecked(false);
}


void Extract::extractFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (extract_ontologyMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to extract.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot extract";
    command += " --method " + getMethod();
    if (!getPrefix().isEmpty())
    {
        command += " --prefix \"" + getPrefix() + "\"";
    }
    for (QString& fileName : extract_ontologyMap.keys())
    {
        command += " -i " + extract_ontologyMap[fileName] + "/" + fileName;
    }
    for (QString& fileName : extract_termFileMap.keys())
    {
        command += " --term-file " + extract_termFileMap[fileName] + "/" + fileName;
    }
    for (QString& term : extractTerms)
    {
        command += " --term " + term;
    }
    if (!getUpperTerm().isEmpty())
    {
        command += " --upper-term " + getUpperTerm();
    }
    if (!getLowerTerm().isEmpty())
    {
        command += " --lower-term " + getLowerTerm();
    }
    if (!getBranchTerm().isEmpty())
    {
        command += " --branch-from-term " + getBranchTerm();
    }
    if (!getUpperTermFile().isEmpty())
    {
        command += " --upper-terms " + getUpperTermFile();
    }
    if (!getLowerTermFile().isEmpty())
    {
        command += " --lower-terms " + getLowerTermFile();
    }
    if (!getBranchTermFile().isEmpty())
    {
        command += " --branch-from-terms " + getBranchTermFile();
    }
    if (extract_ui->extractIndividualsMinimal->isChecked())
    {
        command += " --individuals minimal";
    }
    if (extract_ui->extractIndividualsExclude->isChecked())
    {
        command += " --individuals exclude";
    }
    if (extract_ui->extractIndividualsDefinitions->isChecked())
    {
        command += " --individuals definitions";
    }
    if (extract_ui->extractIntermediatesMinimal->isChecked())
    {
        command += " --intermediates minimal";
    }
    if (extract_ui->extractIntermediatesNone->isChecked())
    {
        command += " --intermediates none";
    }
    if (extract_ui->extractExcludeOntology->isChecked())
    {
        command += " --imports exclude";
    }
    if (extract_ui->extractIncludeAnnotations->isChecked())
    {
        command += " --copy-ontology-annotations true";
    }
    if (extract_ui->extractAnnotateExtract->isChecked())
    {
        command += " --annotate-with-source true";
    }
    if (!getSourceMap().isEmpty())
    {
        command += " --sources " + sourceMapFilePath + "/" + getSourceMap();
    }
    if (extract_ui->extractForce->isChecked())
    {
        command += " --force true";
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

void Extract::onUpperTermClicked(bool checked)
{
    extractUpperTermName->setVisible(checked);
    extractUpperTermName->clear();
}

void Extract::onLowerTermClicked(bool checked)
{
    extractLowerTermName->setVisible(checked);
    extractLowerTermName->clear();
}

void Extract::onBranchTermClicked(bool checked)
{
    extractBranchTermName->setVisible(checked);
    extractBranchTermName->clear();
}

void Extract::onUpperTermFileClicked(bool checked)
{
    extractUpperTermFileName->setVisible(checked);
    extractUpperTermFileSave->setVisible(checked);
    extractUpperTermFileName->clear();
}

void Extract::onLowerTermFileClicked(bool checked)
{
    extractLowerTermFileName->setVisible(checked);
    extractLowerTermFileSave->setVisible(checked);
    extractLowerTermFileName->clear();
}

void Extract::onBranchTermFileClicked(bool checked)
{
    extractBranchTermFileSave->setVisible(checked);
    extractBranchTermFileSaveName->setVisible(checked);
    extractBranchTermFileSaveName->clear();
}

void Extract::onPrefixClicked(bool checked)
{
    extractPrefixName->setVisible(checked);
    extractPrefixName->clear();
}

void Extract::onSourceMapClicked(bool checked)
{
    extractSourceMapSave->setVisible(checked);
    extractSourceMapSaveName->setVisible(checked);
    extractSourceMapSaveName->clear();
}

//------------------------------- Getter methods---------------------------------
QString Extract::getSavePath() const
{
    return extract_ui->extractSavePath->text();
}

QString Extract::getNameSave() const
{
    return extract_ui->extractNameSave->text();
}

QString Extract::getMethod() const
{
    return extract_ui->extractMethods->currentText();
}

QString Extract::getUpperTerm() const
{
    return extract_ui->extractUpperTermName->text();
}

QString Extract::getLowerTerm() const
{
    return extract_ui->extractLowerTermName->text();
}

QString Extract::getBranchTerm() const
{
    return extract_ui->extractBranchTermName->text();
}

QString Extract::getUpperTermFile() const
{
    return extract_ui->extractUpperTermFileName->text();
}

QString Extract::getLowerTermFile() const
{
    return extract_ui->extractLowerTermFileName->text();
}

QString Extract::getBranchTermFile() const
{
    return extract_ui->extractBranchTermFileSaveName->text();
}

QString Extract::getSourceMap() const
{
    return extract_ui->extractSourceMapSaveName->text();
}

QString Extract::getPrefix() const
{
    return extract_ui->extractPrefixName->text();
}


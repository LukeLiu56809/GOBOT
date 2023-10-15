#include "diff.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Diff::Diff(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    diff_ui(ui)
{
    connect(diff_ui->diffSaveAs, &QPushButton::clicked, this, &Diff::onDiffSaveAsClicked);
    connect(diff_ui->diffReset, &QPushButton::clicked, this, &Diff::onDiffResetClicked);
    connect(diff_ui->diffButton, &QPushButton::clicked, this, &Diff::onDiffButtonClicked);

    connect(diff_ui->leftOntologySave, &QCheckBox::clicked, this, &Diff::onLeftOntologySaveClicked);
    connect(diff_ui->leftOntology, &QCheckBox::stateChanged, this, &Diff::onLeftOntologyClicked);
    connect(diff_ui->leftIRI, &QCheckBox::stateChanged, this, &Diff::onLeftIRIClicked);
    connect(diff_ui->leftCatalog, &QCheckBox::stateChanged, this, &Diff::onLeftCatalogClicked);
    connect(diff_ui->leftCatalogSave, &QCheckBox::clicked, this, &Diff::onLeftCatalogSaveClicked);

    connect(diff_ui->rightOntologySave, &QCheckBox::clicked, this, &Diff::onRightOntologySaveClicked);
    connect(diff_ui->rightOntology, &QCheckBox::stateChanged, this, &Diff::onRightOntologyClicked);
    connect(diff_ui->rightIRI, &QCheckBox::stateChanged, this, &Diff::onRightIRIClicked);
    connect(diff_ui->rightCatalog, &QCheckBox::stateChanged, this, &Diff::onRightCatalogClicked);
    connect(diff_ui->rightCatalogSave, &QCheckBox::clicked, this, &Diff::onRightCatalogSaveClicked);

    leftOntologySave = diff_ui->leftOntologySave;
    leftOntologySave->hide();
    leftOntologySaveName = diff_ui->leftOntologySaveName;
    leftOntologySaveName->hide();
    leftIRIName = diff_ui->leftIRIName;
    leftIRIName->hide();
    leftCatalogSave = diff_ui->leftCatalogSave;
    leftCatalogSave->hide();
    leftCatalogSaveName = diff_ui->leftCatalogSaveName;
    leftCatalogSaveName->hide();

    rightOntologySave = diff_ui->rightOntologySave;
    rightOntologySave->hide();
    rightOntologySaveName = diff_ui->rightOntologySaveName;
    rightOntologySaveName->hide();
    rightIRIName = diff_ui->rightIRIName;
    rightIRIName->hide();
    rightCatalogSave = diff_ui->rightCatalogSave;
    rightCatalogSave->hide();
    rightCatalogSaveName = diff_ui->rightCatalogSaveName;
    rightCatalogSaveName->hide();
}

void Diff::onLeftOntologySaveClicked()
{
    addFiles(ldiff_filesMap, diff_ui->leftOntologySaveName);
}

void Diff::onRightOntologySaveClicked()
{
    addFiles(rdiff_filesMap, diff_ui->rightOntologySaveName);
}

void Diff::onLeftCatalogSaveClicked()
{
    addCatalog(diff_ui->leftCatalogSaveName, ltermPath);
}

void Diff::onRightCatalogSaveClicked()
{
    addCatalog(diff_ui->rightCatalogSaveName, rtermPath);
}

void Diff::onDiffSaveAsClicked()
{
    saveFiles();
}

void Diff::onDiffResetClicked()
{
    resetDiff();
}

void Diff::onDiffButtonClicked()
{
    diffFiles();
}

void Diff::addFiles(QMap<QString, QString>& filesMap, QLineEdit* fileNameLineEdit)
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());

    if (!filePath.isEmpty())
    {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        filesMap[fileName] = fileInfo.path();
        fileNameLineEdit->setText(fileName);
    }
}

void Diff::addCatalog(QLineEdit* catalogFile, QString& termPath)
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath(), "(*.xml)");
    if (!file.isEmpty())
    {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        catalogFile->setText(fileName);
        QString directory = fileInfo.path();
        termPath = directory;
    }
}

void Diff::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Text File (*.txt);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        diff_ui->diffNameSave->setText(fileName);
        diff_ui->diffSavePath->setText(directory);
    }
}

void Diff::resetDiff()
{
    ldiff_filesMap.clear();
    rdiff_filesMap.clear();
    diff_ui->diffNameSave->clear();
    diff_ui->diffSavePath->clear();
    diff_ui->leftOntology->setChecked(false);
    diff_ui->rightOntology->setChecked(false);
    diff_ui->leftIRI->setChecked(false);
    diff_ui->rightIRI->setChecked(false);
    diff_ui->leftCatalog->setChecked(false);
    diff_ui->rightCatalog->setChecked(false);
}

void Diff::diffFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (getLeftOntology().isEmpty() && getLeftIRI().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please have an ontology/IRI ready in the left branch.");
        return;
    }
    if (getRightOntology().isEmpty() && getRightIRI().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please have an ontology/IRI ready in the right branch.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot diff";
    if (!getLeftOntology().isEmpty())
    {
        command += " --left " + ldiff_filesMap[getLeftOntology()] + "/" + getLeftOntology();
    }
    if (!getLeftIRI().isEmpty())
    {
        command += " --left-iri " + getLeftIRI();
    }
    if (!getLeftCatalog().isEmpty())
    {
        command += " --left-catalog " + ltermPath + "/" + getLeftCatalog();
    }
    if (!getRightOntology().isEmpty())
    {
        command += " --right " + rdiff_filesMap[getRightOntology()] + "/" + getRightOntology();
    }
    if (!getRightIRI().isEmpty())
    {
        command += " --right-iri " + getRightIRI();
    }
    if (!getRightCatalog().isEmpty())
    {
        command += " --right-catalog " + rtermPath + "/" + getRightCatalog();
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

void Diff::onLeftOntologyClicked(bool checked)
{
    leftOntologySave->setVisible(checked);
    leftOntologySaveName->setVisible(checked);

    if (checked)
    {
        diff_ui->leftIRI->setChecked(false);
        diff_ui->leftIRIName->clear();
    }
    else
    {
        diff_ui->leftOntologySaveName->clear();
    }
}

void Diff::onLeftIRIClicked(bool checked)
{
    leftIRIName->setVisible(checked);

    if (checked)
    {
        diff_ui->leftOntology->setChecked(false);
        diff_ui->leftOntologySaveName->clear();
    }
    else
    {
        diff_ui->leftIRIName->clear();
    }
}

void Diff::onLeftCatalogClicked(bool checked)
{
    leftCatalogSave->setVisible(checked);
    leftCatalogSaveName->setVisible(checked);
    diff_ui->leftCatalogSaveName->clear();
}

void Diff::onRightOntologyClicked(bool checked)
{
    rightOntologySave->setVisible(checked);
    rightOntologySaveName->setVisible(checked);

    if (checked)
    {
        diff_ui->rightIRI->setChecked(false);
        diff_ui->rightIRIName->clear();
    }
    else
    {
        diff_ui->rightOntologySaveName->clear();
    }
}

void Diff::onRightIRIClicked(bool checked)
{
    rightIRIName->setVisible(checked);

    if (checked)
    {
        diff_ui->rightOntology->setChecked(false);
        diff_ui->rightOntologySaveName->clear();
    }
    else
    {
        diff_ui->rightIRIName->clear();
    }
}

void Diff::onRightCatalogClicked(bool checked)
{
    rightCatalogSave->setVisible(checked);
    rightCatalogSaveName->setVisible(checked);
    diff_ui->rightCatalogSaveName->clear();
}

//------------------------------- Getter methods---------------------------------
QString Diff::getLeftOntology() const
{
    return diff_ui->leftOntologySaveName->text();
}

QString Diff::getRightOntology() const
{
    return diff_ui->rightOntologySaveName->text();
}

QString Diff::getLeftIRI() const
{
    return diff_ui->leftIRIName->text();
}

QString Diff::getRightIRI() const
{
    return diff_ui->rightIRIName->text();
}

QString Diff::getLeftCatalog() const
{
    return diff_ui->leftCatalogSaveName->text();
}

QString Diff::getRightCatalog() const
{
    return diff_ui->rightCatalogSaveName->text();
}

QString Diff::getSavePath() const
{
    return diff_ui->diffSavePath->text();
}

QString Diff::getNameSave() const
{
    return diff_ui->diffNameSave->text();
}





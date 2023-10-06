#include "report.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QInputDialog>
#include <QFileInfo>

Report::Report(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    report_ui(ui)
{
    connect(report_ui->reportAddFile, &QPushButton::clicked, this, &Report::onReportAddFileClicked);
    connect(report_ui->reportAddURI, &QPushButton::clicked, this, &Report::onReportAddURIClicked);
    connect(report_ui->reportTDBDirectory, &QPushButton::clicked, this, &Report::onAddTDBDirectoryClicked);
    connect(report_ui->defineProfileSave, &QPushButton::clicked, this, &Report::onDefineProfileSaveClicked);

    connect(report_ui->reportRemoveFile, &QPushButton::clicked, this, &Report::onReportRemoveFileClicked);
    connect(report_ui->reportRemoveURI, &QPushButton::clicked, this, &Report::onReportRemoveURIClicked);

    connect(report_ui->reportSaveAs, &QPushButton::clicked, this, &Report::onReportSaveAsClicked);
    connect(report_ui->reportReset, &QPushButton::clicked, this, &Report::onReportResetClicked);
    connect(report_ui->reportButton, &QPushButton::clicked, this, &Report::onReportButtonClicked);

    connect(report_ui->violations, &QCheckBox::stateChanged, this, &Report::onViolationsClicked);
    connect(report_ui->failOn, &QCheckBox::stateChanged, this, &Report::onFailOnClicked);
    connect(report_ui->defineProfile, &QCheckBox::stateChanged, this, &Report::onDefineProfileClicked);
    connect(report_ui->limit, &QCheckBox::stateChanged, this, &Report::onLimitClicked);

    violationsNumber = report_ui->violationsNumber;
    violationsNumber->hide();
    failOnType = report_ui->failOnType;
    failOnType->hide();
    defineProfileSave = report_ui->defineProfileSave;
    defineProfileSave->hide();
    defineProfileName = report_ui->defineProfileName;
    defineProfileName->hide();
    limitNumber = report_ui->limitNumber;
    limitNumber->hide();
}

void Report::onReportAddFileClicked()
{
    addFiles();
}

void Report::onReportAddURIClicked()
{
    addURI();
}

void Report::onAddTDBDirectoryClicked()
{
    reportDirectory();
}

void Report::onDefineProfileSaveClicked()
{
    addProfile();
}

void Report::onReportRemoveFileClicked()
{
    removeFiles();
}

void Report::onReportRemoveURIClicked()
{
    removeURI();
}

void Report::onReportSaveAsClicked()
{
    saveFiles();
}

void Report::onReportResetClicked()
{
    resetReport();
}

void Report::onReportButtonClicked()
{
    reportFiles();
}

void Report::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            report_ui->reportFileNames->addItem(fileName);
            report_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Report::addURI()
{
    bool ok;
    QString term = QInputDialog::getText(nullptr, "Add Term", "Enter a term:", QLineEdit::Normal, "", &ok);

    if (ok && !term.isEmpty()) {
        report_ui->reportURIName->addItem(term);
    }
    URITerms.append(term);
}

void Report::reportDirectory()
{
    QString directory = QFileDialog::getExistingDirectory(nullptr, "Choose Directory", QDir::homePath());

    if (!directory.isEmpty()) {
        report_ui->reportTDBDirectoryName->setText(directory);
    }
}

void Report::addProfile()
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!file.isEmpty()) {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        report_ui->defineProfileName->setText(fileName);
        QString directory = fileInfo.path();
        profilePath = directory;
    }
}

void Report::removeFiles()
{
    QListWidgetItem* selectedItem = report_ui->reportFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    report_ui->reportFileNames->takeItem(report_ui->reportFileNames->row(selectedItem));

    report_filesMap.remove(selectedFileName);
}

void Report::removeURI()
{
    QListWidgetItem* selectedItem = report_ui->reportURIName->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file/term to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    report_ui->reportURIName->takeItem(report_ui->reportURIName->row(selectedItem));

    URITerms.removeOne(selectedFileName);
}

void Report::saveFiles()
{
    QString saveFilter = "Ontology File (*." + getFormat() + ");;All Files (*)";
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), saveFilter);

    if (!saveFileName.isEmpty()) {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        report_ui->reportNameSave->setText(fileName);
        report_ui->reportSavePath->setText(directory);
    }
}

void Report::resetReport()
{
    report_filesMap.clear();
    report_ui->reportFileNames->clear();
    report_ui->reportNameSave->clear();
    report_ui->reportSavePath->clear();
    report_ui->reportFormat->setCurrentIndex(0);
    report_ui->violations->setChecked(false);
    report_ui->includeLabels->setChecked(false);
    report_ui->failOn->setChecked(false);
    report_ui->defineProfile->setChecked(false);
    report_ui->reportTDB->setChecked(false);
    report_ui->reportKeepTDB->setChecked(false);
    report_ui->reportTDBDirectoryName->clear();
    report_ui->limit->setChecked(false);
    report_ui->reportURIName->clear();
    URITerms.clear();
}

void Report::reportFiles()
{
    QString selectedFilePath = report_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (report_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to report.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to report.");
        return;
    }

    QString command = "robot report -i " +
                      selectedFilePath + "/" + getSelectedFileName() +
                      " --format " + getFormat();
    if (report_ui->violations->isChecked())
    {
        command += " --print " + getViolations();
    }
    if (report_ui->includeLabels->isChecked())
    {
        command += " --labels true";
    }
    if (report_ui->failOn->isChecked())
    {
        command += " --fail-on " + getFailOn();
    }
    if (!getProfileName().isEmpty())
    {
        command += " --profile " + profilePath + "/" + getProfileName();
    }
    if (report_ui->reportTDB->isChecked())
    {
        command += " --tdb true";
    }
    if (report_ui->reportKeepTDB->isChecked())
    {
        command += " --keep-tdb-mappings true";
    }
    if (!getReportTDBDirectoryName().isEmpty())
    {
        command += " --tdb-directory " + getReportTDBDirectoryName();
    }
    if (report_ui->limit->isChecked())
    {
        command += " --limit " + getLimit();
    }
    for (QString& URI : URITerms)
    {
        command += " --base-iri \"" + URI + "\"";
    }
    command += " -o " + result;

    int check = system(command.toUtf8());
    if (check != 0)
    {
        QMessageBox::warning(nullptr, "Error", "Violations found.");
    }
    else
    {
        QMessageBox::warning(nullptr, "Error", "No violations found.");
    }
}

void Report::onViolationsClicked(bool checked)
{
    violationsNumber->setVisible(checked);
    violationsNumber->setValue(0);
}

void Report::onFailOnClicked(bool checked)
{
    failOnType->setVisible(checked);
    failOnType->setCurrentIndex(0);
}

void Report::onDefineProfileClicked(bool checked)
{
    defineProfileSave->setVisible(checked);
    defineProfileName->setVisible(checked);
    defineProfileName->clear();
}

void Report::onLimitClicked(bool checked)
{
    limitNumber->setVisible(checked);
    limitNumber->clear();
}

//------------------------------- Getter methods---------------------------------
QString Report::getSavePath() const
{
    return report_ui->reportSavePath->text();
}

QString Report::getNameSave() const
{
    return report_ui->reportNameSave->text();
}

QString Report::getFormat() const
{
    return report_ui->reportFormat->currentText();
}

QString Report::getViolations() const
{
    return report_ui->violationsNumber->text();
}

QString Report::getFailOn() const
{
    return report_ui->failOnType->currentText();
}

QString Report::getProfileName() const
{
    return report_ui->defineProfileName->text();
}

QString Report::getReportTDBDirectoryName() const
{
    return report_ui->reportTDBDirectoryName->text();
}

QString Report::getLimit() const
{
    return report_ui->limitNumber->text();
}

QString Report::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = report_ui->reportFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

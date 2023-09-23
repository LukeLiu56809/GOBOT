#include "repair.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Repair::Repair(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    repair_ui(ui)
{
    connect(repair_ui->repairAddFile, &QPushButton::clicked, this, &Repair::onRepairAddFileClicked);
    connect(repair_ui->repairRemoveFile, &QPushButton::clicked, this, &Repair::onRepairRemoveFileClicked);
    connect(repair_ui->repairSaveAs, &QPushButton::clicked, this, &Repair::onRepairSaveAsClicked);
    connect(repair_ui->repairReset, &QPushButton::clicked, this, &Repair::onRepairResetClicked);
    connect(repair_ui->repairButton, &QPushButton::clicked, this, &Repair::onRepairButtonClicked);
    connect(repair_ui->repairClasses, &QCheckBox::stateChanged, this, &Repair::onRepairClassesClicked);
    connect(repair_ui->repairTerms, &QCheckBox::stateChanged, this, &Repair::onRepairTermsClicked);
    connect(repair_ui->repairTermsFile, &QPushButton::clicked, this, &Repair::onRepairTermsFileClicked);

    repairClassesEdit = repair_ui->repairClassesEdit;
    repairClassesEdit->hide();

    repairTermsEdit = repair_ui->repairTermsEdit;
    repairTermsEdit->hide();
    repairTermsFile = repair_ui->repairTermsFile;
    repairTermsFile->hide();
}

void Repair::onRepairAddFileClicked()
{
    addFiles();
}

void Repair::onRepairRemoveFileClicked()
{
    removeFiles();
}

void Repair::onRepairSaveAsClicked()
{
    saveFiles();
}

void Repair::onRepairResetClicked()
{
    resetRepair();
}

void Repair::onRepairButtonClicked()
{
    repairFiles();
}

void Repair::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            repair_ui->repairFileNames->addItem(fileName);
            repair_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Repair::removeFiles()
{
    QListWidgetItem* selectedItem = repair_ui->repairFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    repair_ui->repairFileNames->takeItem(repair_ui->repairFileNames->row(selectedItem));

    repair_filesMap.remove(selectedFileName);
}

void Repair::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        repair_ui->repairNameSave->setText(fileName);
        repair_ui->repairSavePath->setText(directory);
    }
}

void Repair::resetRepair()
{
    repair_ui->repairClasses->setChecked(false);
    repair_ui->repairTerms->setChecked(false);

    repair_filesMap.clear();
    repair_ui->repairFileNames->clear();

    repair_ui->repairNameSave->clear();
    repair_ui->repairSavePath->clear();
    repair_ui->repairClassesEdit->clear();
    repair_ui->repairTermsEdit->clear();
}


void Repair::repairFiles()
{
    QString selectedFilePath = repair_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (repair_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to repair.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to repair.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot repair \\\n"
                                                 " -i " + getSelectedFileName() + " \\\n";
    if (!getClasses().isEmpty())
    {
        command += "--annotation-property " + getClasses() + " \\\n";
    }
    if (!getTerms().isEmpty())
    {
        command += "--annotation-properties-file " + termPath + "/" + getTerms() + " \\\n";
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

void Repair::onRepairClassesClicked(bool checked)
{
    repair_ui->repairClassesEdit->setVisible(checked);

    if (checked) {
        repair_ui->repairTerms->setChecked(false);
        repair_ui->repairTermsEdit->clear();
    } else {
        repair_ui->repairClassesEdit->clear();
    }
}

void Repair::onRepairTermsClicked(bool checked)
{
    repair_ui->repairTermsFile->setVisible(checked);
    repair_ui->repairTermsEdit->setVisible(checked);

    if (checked) {
        repair_ui->repairClasses->setChecked(false);
        repair_ui->repairClassesEdit->clear();
    } else {
        repair_ui->repairTermsEdit->clear();
    }
}

void Repair::onRepairTermsFileClicked()
{
    QString file = QFileDialog::getOpenFileName(nullptr, "Open file", QDir::homePath());
    if (!file.isEmpty()) {
        QFileInfo fileInfo(file);
        QString fileName = fileInfo.fileName();
        repair_ui->repairTermsEdit->setText(fileName);
        QString directory = fileInfo.path();
        termPath = directory;
    }
}

//------------------------------- Getter methods---------------------------------
QString Repair::getClasses() const
{
    return repair_ui->repairClassesEdit->text();
}

QString Repair::getTerms() const
{
    return repair_ui->repairTermsEdit->text();
}

QString Repair::getSavePath() const
{
    return repair_ui->repairSavePath->text();
}

QString Repair::getNameSave() const
{
    return repair_ui->repairNameSave->text();
}

QString Repair::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = repair_ui->repairFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}


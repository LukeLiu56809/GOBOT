#include "measure.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Measure::Measure(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    measure_ui(ui)
{
    connect(measure_ui->measureAddFile, &QPushButton::clicked, this, &Measure::onMeasureAddFileClicked);
    connect(measure_ui->measureRemoveFile, &QPushButton::clicked, this, &Measure::onMeasureRemoveFileClicked);
    connect(measure_ui->measureSaveAs, &QPushButton::clicked, this, &Measure::onMeasureSaveAsClicked);
    connect(measure_ui->measureReset, &QPushButton::clicked, this, &Measure::onMeasureResetClicked);
    connect(measure_ui->measureButton, &QPushButton::clicked, this, &Measure::onMeasureButtonClicked);
    connect(measure_ui->reasoner, &QCheckBox::stateChanged, this, &Measure::onReasonerCheckboxStateChanged);

    reasoner = measure_ui->reasonerMetrics;
    reasoner->hide();
}

void Measure::onMeasureAddFileClicked()
{
    addFiles();
}

void Measure::onMeasureRemoveFileClicked()
{
    removeFiles();
}

void Measure::onMeasureSaveAsClicked()
{
    saveFiles();
}

void Measure::onMeasureResetClicked()
{
    resetMeasure();
}

void Measure::onMeasureButtonClicked()
{
    measureFiles();
}

void Measure::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            measure_ui->measureFileNames->addItem(fileName);
            measure_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Measure::removeFiles()
{
    QListWidgetItem* selectedItem = measure_ui->measureFileNames->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    measure_ui->measureFileNames->takeItem(measure_ui->measureFileNames->row(selectedItem));

    measure_filesMap.remove(selectedFileName);
}

void Measure::saveFiles()
{
    QString saveFilter = "Ontology File (*." + getFormat() + ");;All Files (*)";
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), saveFilter);

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        measure_ui->measureNameSave->setText(fileName);
        measure_ui->measureSavePath->setText(directory);
    }
}

void Measure::resetMeasure()
{
    measure_filesMap.clear();
    measure_ui->measureFileNames->clear();
    measure_ui->measureNameSave->clear();
    measure_ui->measureSavePath->clear();
    measure_ui->measureFormat->setCurrentIndex(0);
    measure_ui->reasonerMetrics->setCurrentIndex(0);
    measure_ui->essential->setChecked(false);
    measure_ui->extended->setChecked(false);
    measure_ui->all->setChecked(false);
    measure_ui->reasoner->setChecked(false);
}

void Measure::measureFiles()
{
    QString selectedFilePath = measure_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (measure_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to measure.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to measure.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot measure -i " +
                      getSelectedFileName() +
                      " --format " + getFormat();
    if (measure_ui->essential->isChecked())
    {
        command += " --metrics essential ";
    }
    if (measure_ui->extended->isChecked())
    {
        command += " --metrics extended ";
    }
    if (measure_ui->all->isChecked())
    {
        command += " --metrics all ";
    }
    if (measure_ui->reasoner->isChecked())
    {
        command += " --metrics " + measure_ui->reasonerMetrics->currentText()
                   + "-reasoner ";
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

void Measure::onReasonerCheckboxStateChanged(int checked)
{
    measure_ui->reasonerMetrics->setVisible(checked);
}

//------------------------------- Getter methods---------------------------------
QString Measure::getSavePath() const
{
    return measure_ui->measureSavePath->text();
}

QString Measure::getNameSave() const
{
    return measure_ui->measureNameSave->text();
}

QString Measure::getFormat() const
{
    return measure_ui->measureFormat->currentText();
}

QString Measure::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = measure_ui->measureFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

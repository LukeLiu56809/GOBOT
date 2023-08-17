#include "export.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Export::Export(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    export_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(export_ui->exportAddFile, &QPushButton::clicked, this, &Export::onExportAddFileClicked);
    connect(export_ui->exportRemoveFile, &QPushButton::clicked, this, &Export::onExportRemoveFileClicked);
    connect(export_ui->exportSaveAs, &QPushButton::clicked, this, &Export::onExportSaveAsClicked);
    connect(export_ui->exportReset, &QPushButton::clicked, this, &Export::onExportResetClicked);
    connect(export_ui->exportButton, &QPushButton::clicked, this, &Export::onExportButtonClicked);
    connect(export_ui->exportHeader, QOverload<int>::of(&QCheckBox::stateChanged), this, &Export::onExportHeaderClicked);
    connect(export_ui->exportSort, QOverload<int>::of(&QCheckBox::stateChanged), this, &Export::onExportSortClicked);
    connect(export_ui->exportSplit, QOverload<int>::of(&QCheckBox::stateChanged), this, &Export::onExportSplitClicked);

    export_ui->exportHeaderName->hide();
    export_ui->exportSortName->hide();
    export_ui->exportSplitName->hide();
}

void Export::onExportAddFileClicked()
{
    addFiles();
}

void Export::onExportRemoveFileClicked()
{
    removeFiles();
}

void Export::onExportSaveAsClicked()
{
    saveFiles();
}

void Export::onExportResetClicked()
{
    resetExport();
}

void Export::onExportButtonClicked()
{
    exportFiles();
}

void Export::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            export_ui->exportFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
            export_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Export::removeFiles()
{
    QListWidgetItem* selectedItem = export_ui->exportFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    export_ui->exportFileNames->takeItem(export_ui->exportFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    export_filesMap.remove(selectedFileName);
}

void Export::saveFiles()
{
    QString saveFilter = "Resultant Files (*." + getFormat() + ");;All Files (*)";
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), saveFilter);

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        export_ui->exportNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        export_ui->exportSavePath->setText(directory);
    }
}

void Export::resetExport()
{
    export_filesMap.clear();
    export_ui->exportFileNames->clear();
    export_ui->exportNameSave->clear();
    export_ui->exportSavePath->clear();
    export_ui->exportFormat->setCurrentIndex(0);
    export_ui->exportHeader->setChecked(false);
    export_ui->exportSort->setChecked(false);
    export_ui->exportSplit->setChecked(false);
    export_ui->exportClasses->setChecked(false);
    export_ui->exportIndividuals->setChecked(false);
    export_ui->exportProperties->setChecked(false);
    export_ui->exportAny->setChecked(false);
    export_ui->exportNamed->setChecked(false);
    export_ui->exportAnonymous->setChecked(false);
    export_ui->exportName->setChecked(false);
    export_ui->exportId->setChecked(false);
    export_ui->exportIRI->setChecked(false);
    export_ui->exportLabel->setChecked(false);
}

void Export::exportFiles()
{
    QString selectedFilePath = export_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (export_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to export.");
        return;
    }
    if (getHeader().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "A header is needed.");
        return;
    }
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to Export.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    // Construct system command
    QString command = "cd " + selectedFilePath + " && robot export -i " +
                      getSelectedFileName() + " --format " + getFormat() +
                      " --header \"" + getHeader() + "\"";
    if (!getSort().isEmpty())
    {
        command += " --sort \"" + getSort() + "\"";
    }
    if (!getSplit().isEmpty())
    {
        command += " --split \"" + getSplit() + " \"";
    }
    if (export_ui->exportClasses->isChecked() || export_ui->exportIndividuals->isChecked() ||
        export_ui->exportProperties->isChecked())
    {
        command += " --include \"";
        if (export_ui->exportClasses->isChecked())
        {
            command += getClasses() + " ";
        }
        if (export_ui->exportIndividuals->isChecked())
        {
            command += getIndividuals() + " ";
        }
        if (export_ui->exportProperties->isChecked())
        {
            command += getProperties();
        }
        command += "\"";
    }
    if (export_ui->exportAny->isChecked())
    {
        command += " --entity-select ANY";
    }
    if (export_ui->exportNamed->isChecked())
    {
        command += " --entity-select NAMED";
    }
    if (export_ui->exportAnonymous->isChecked())
    {
        command += " --entity-select ANONYMOUS";
    }
    if (export_ui->exportName->isChecked())
    {
        command += " --entity-format NAME";
    }
    if (export_ui->exportId->isChecked())
    {
        command += " --entity-format ID";
    }
    if (export_ui->exportIRI->isChecked())
    {
        command += " --entity-format IRI";
    }
    if (export_ui->exportLabel->isChecked())
    {
        command += " --entity-format LABEL";
    }
    command += " --export " + result;

    // System Call
    int check = system(command.toUtf8());
    if (check != 0)
    {
        QMessageBox::warning(nullptr, "Error", "Not able to execute command.");
    }
    else
    {
        QMessageBox::warning(nullptr, "Error", "Command executed successfully.");
    }

    qDebug() << "String: " << command;
}

void Export::onExportHeaderClicked(bool checked)
{
    export_ui->exportHeaderName->setVisible(checked);
    export_ui->exportHeaderName->clear();
}

void Export::onExportSortClicked(bool checked)
{
    export_ui->exportSortName->setVisible(checked);
    export_ui->exportSortName->clear();
}

void Export::onExportSplitClicked(bool checked)
{
    export_ui->exportSplitName->setVisible(checked);
    export_ui->exportSplitName->clear();
}

//------------------------------- Getter methods---------------------------------
QString Export::getSavePath() const
{
    return export_ui->exportSavePath->text();
}

QString Export::getNameSave() const
{
    return export_ui->exportNameSave->text();
}

QString Export::getFormat() const
{
    return export_ui->exportFormat->currentText();
}

QString Export::getHeader() const
{
    return export_ui->exportHeaderName->text();
}

QString Export::getSort() const
{
    return export_ui->exportSortName->text();
}

QString Export::getSplit() const
{
    return export_ui->exportSplitName->text();
}

QString Export::getClasses() const
{
    return export_ui->exportClasses->text();
}

QString Export::getIndividuals() const
{
    return export_ui->exportIndividuals->text();
}

QString Export::getProperties() const
{
    return export_ui->exportProperties->text();
}


QString Export::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = export_ui->exportFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

#include "convert.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Convert::Convert(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    convert_ui(ui)
{
    connect(convert_ui->convertAddFile, &QPushButton::clicked, this, &Convert::onConvertAddFileClicked);
    connect(convert_ui->convertRemoveFile, &QPushButton::clicked, this, &Convert::onConvertRemoveFileClicked);
    connect(convert_ui->convertSaveAs, &QPushButton::clicked, this, &Convert::onConvertSaveAsClicked);
    connect(convert_ui->convertReset, &QPushButton::clicked, this, &Convert::onConvertResetClicked);
    connect(convert_ui->convertButton, &QPushButton::clicked, this, &Convert::onConvertButtonClicked);
    connect(convert_ui->convertFormat, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &Convert::onConvertFormatChanged);

    convert_ui->convertIgnoreChecks->hide();
}

void Convert::onConvertAddFileClicked()
{
    addFiles();
}

void Convert::onConvertRemoveFileClicked()
{
    removeFiles();
}

void Convert::onConvertSaveAsClicked()
{
    saveFiles();
}

void Convert::onConvertResetClicked()
{
    resetConvert();
}

void Convert::onConvertButtonClicked()
{
    convertFiles();
}

void Convert::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty())
    {
        for (const QString& filePath : filePaths)
        {
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();
            convert_ui->convertFileNames->addItem(fileName);
            convert_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Convert::removeFiles()
{
    QListWidgetItem* selectedItem = convert_ui->convertFileNames->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    convert_ui->convertFileNames->takeItem(convert_ui->convertFileNames->row(selectedItem));

    convert_filesMap.remove(selectedFileName);
}

void Convert::saveFiles()
{
    QString saveFilter = "Ontology File (*." + getFormat() + ");;All Files (*)";
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), saveFilter);

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        convert_ui->convertNameSave->setText(fileName);
        convert_ui->convertSavePath->setText(directory);
    }
}

void Convert::resetConvert()
{
    convert_filesMap.clear();
    convert_ui->convertFileNames->clear();
    convert_ui->convertNameSave->clear();
    convert_ui->convertSavePath->clear();
    convert_ui->convertCompress->setChecked(false);
    convert_ui->convertFormat->setCurrentIndex(0);
}

void Convert::convertFiles()
{
    QString selectedFilePath = convert_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (convert_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to convert.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Select a file to convert.");
        return;
    }

    QString command = "cd " + selectedFilePath + " && robot convert -i " +
                      getSelectedFileName() +
                      " --format " + getFormat();
    if (getIgnoreChecks())
    {
        command += " --check false";
    }
    command += " -o " + result;
    if (getCompress())
    {
        command += ".gz";
    }

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

void Convert::onConvertFormatChanged(int index)
{
    bool showCheckbox = (index == 1);
    convert_ui->convertIgnoreChecks->setVisible(showCheckbox);
}

//------------------------------- Getter methods---------------------------------
QString Convert::getSavePath() const
{
    return convert_ui->convertSavePath->text();
}

QString Convert::getNameSave() const
{
    return convert_ui->convertNameSave->text();
}

QString Convert::getFormat() const
{
    return convert_ui->convertFormat->currentText();
}

bool Convert::getCompress() const
{
    return convert_ui->convertCompress->isChecked();
}

bool Convert::getIgnoreChecks() const
{
    return convert_ui->convertIgnoreChecks->isChecked();
}

QString Convert::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = convert_ui->convertFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

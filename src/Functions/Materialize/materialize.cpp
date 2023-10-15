#include "materialize.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QInputDialog>

Materialize::Materialize(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    materialize_ui(ui)
{
    connect(materialize_ui->materializeAddOntology, &QPushButton::clicked, this, &Materialize::onMaterializeAddOntologyClicked);
    connect(materialize_ui->materializeAddTerm, &QPushButton::clicked, this, &Materialize::onMaterializeAddTermClicked);
    connect(materialize_ui->materializeAddTermFile, &QPushButton::clicked, this, &Materialize::onMaterializeAddTermFileClicked);

    connect(materialize_ui->materializeRemoveOntology, &QPushButton::clicked, this, &Materialize::onMaterializeRemoveOntologyClicked);
    connect(materialize_ui->materializeRemoveTerm, &QPushButton::clicked, this, &Materialize::onMaterializeRemoveTermClicked);
    connect(materialize_ui->materializeRemoveTermFile, &QPushButton::clicked, this, &Materialize::onMaterializeRemoveTermFileClicked);

    connect(materialize_ui->materializeSaveAs, &QPushButton::clicked, this, &Materialize::onMaterializeSaveAsClicked);
    connect(materialize_ui->materializeReset, &QPushButton::clicked, this, &Materialize::onMaterializeResetClicked);
    connect(materialize_ui->materializeButton, &QPushButton::clicked, this, &Materialize::onMaterializeButtonClicked);
}

void Materialize::onMaterializeAddOntologyClicked()
{
    addFiles(materialize_ontologyMap, materialize_ui->materializeOntologyName);
}

void Materialize::onMaterializeAddTermFileClicked()
{
    addFiles(materialize_termFileMap, materialize_ui->materializeTermFileName);
}

void Materialize::onMaterializeAddTermClicked()
{
    addTerms();
}

void Materialize::onMaterializeRemoveOntologyClicked()
{
    removeFiles(materialize_ontologyMap, materialize_ui->materializeOntologyName);
}

void Materialize::onMaterializeRemoveTermFileClicked()
{
    removeFiles(materialize_termFileMap, materialize_ui->materializeTermFileName);
}

void Materialize::onMaterializeRemoveTermClicked()
{
    removeTerms();
}

void Materialize::onMaterializeSaveAsClicked()
{
    saveFiles();
}

void Materialize::onMaterializeResetClicked()
{
    resetMaterialize();
}

void Materialize::onMaterializeButtonClicked()
{
    materializeFiles();
}

void Materialize::addFiles(QMap<QString, QString>& filesMap, QListWidget* files)
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

void Materialize::addTerms()
{
    bool ok;
    QString term = QInputDialog::getText(nullptr, "Add Term", "Enter a term:", QLineEdit::Normal, "", &ok);

    if (ok && !term.isEmpty())
    {
        materialize_ui->materializeTermName->addItem(term);
    }
    materializeTerms.append(term);
}

void Materialize::addTermFiles(QString& path, QLineEdit* file)
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

void Materialize::removeFiles(QMap<QString, QString>& filesMap, QListWidget* files)
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

void Materialize::removeTerms()
{
    QListWidgetItem* selectedItem = materialize_ui->materializeTermName->currentItem();

    if (!selectedItem)
    {
        QMessageBox::warning(nullptr, "Error", "Select a file/term to remove.");
        return;
    }

    QString selectedFileName = selectedItem->text();

    materialize_ui->materializeTermName->takeItem(materialize_ui->materializeTermName->row(selectedItem));

    materializeTerms.removeOne(selectedFileName);
}

void Materialize::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Ontology File (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty())
    {
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();
        QString directory = fileInfo.path();
        materialize_ui->materializeNameSave->setText(fileName);
        materialize_ui->materializeSavePath->setText(directory);
    }
}

void Materialize::resetMaterialize()
{
    materialize_ontologyMap.clear();
    materialize_termFileMap.clear();
    materializeTerms.clear();
    materialize_ui->materializeOntologyName->clear();
    materialize_ui->materializeTermName->clear();
    materialize_ui->materializeTermFileName->clear();
    materialize_ui->materializeNameSave->clear();
    materialize_ui->materializeSavePath->clear();

    materialize_ui->materializeOption->setCurrentIndex(0);
}


void Materialize::materializeFiles()
{
    QString result = getSavePath() + "/" + getNameSave();

    if (materialize_ontologyMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to Materialize.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }

    QString command = "robot materialize";
    command += " --reasoner " + getReason();
    for (QString& fileName : materialize_ontologyMap.keys())
    {
        command += " -i " + materialize_ontologyMap[fileName] + "/" + fileName;
    }
    for (QString& fileName : materialize_termFileMap.keys())
    {
        command += " --term-file " + materialize_termFileMap[fileName] + "/" + fileName;
    }
    for (QString& term : materializeTerms)
    {
        command += " --term " + term;
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
QString Materialize::getSavePath() const
{
    return materialize_ui->materializeSavePath->text();
}

QString Materialize::getNameSave() const
{
    return materialize_ui->materializeNameSave->text();
}

QString Materialize::getReason() const
{
    return materialize_ui->materializeOption->currentText();
}


#include "reason.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

Reason::Reason(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent),
    reason_ui(ui)
{
    // Connect the signals from the UI buttons to the appropriate slots
    connect(reason_ui->reasonAddFile, &QPushButton::clicked, this, &Reason::onReasonAddFileClicked);
    connect(reason_ui->reasonRemoveFile, &QPushButton::clicked, this, &Reason::onReasonRemoveFileClicked);
    connect(reason_ui->reasonSaveAs, &QPushButton::clicked, this, &Reason::onReasonSaveAsClicked);
    connect(reason_ui->reasonReset, &QPushButton::clicked, this, &Reason::onReasonResetClicked);
    connect(reason_ui->reasonButton, &QPushButton::clicked, this, &Reason::onReasonButtonClicked);
}

void Reason::onReasonAddFileClicked()
{
    addFiles();
}

void Reason::onReasonRemoveFileClicked()
{
    removeFiles();
}

void Reason::onReasonSaveAsClicked()
{
    saveFiles();
}

void Reason::onReasonResetClicked()
{
    resetReason();
}

void Reason::onReasonButtonClicked()
{
    reasonFiles();
}

void Reason::addFiles()
{
    QStringList filePaths = QFileDialog::getOpenFileNames(nullptr, "Open files", QDir::homePath());

    if (!filePaths.isEmpty()) {
        for (const QString& filePath : filePaths) {
            // Extract the file name from the full path
            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            // Append the file name to the list view box
            reason_ui->reasonFileNames->addItem(fileName);

            // Add the file name and its corresponding file path to the QMap
            reason_filesMap[fileName] = fileInfo.path();
        }
    }
}

void Reason::removeFiles()
{
    QListWidgetItem* selectedItem = reason_ui->reasonFileNames->currentItem();

    if (!selectedItem) {
        QMessageBox::warning(nullptr, "Error", "Select a file to remove.");
        return;
    }

    // Get the text of the selected item (file name)
    QString selectedFileName = selectedItem->text();

    // Remove the selected item from the list view widget
    reason_ui->reasonFileNames->takeItem(reason_ui->reasonFileNames->row(selectedItem));

    // Remove the selected file name from the QMap
    reason_filesMap.remove(selectedFileName);
}

void Reason::saveFiles()
{
    QString saveFileName = QFileDialog::getSaveFileName(nullptr, "Save As", QDir::homePath(), "Resultant Files (*.owl);;All Files (*)");

    if (!saveFileName.isEmpty()) {
        // Extract the file name from the full path
        QFileInfo fileInfo(saveFileName);
        QString fileName = fileInfo.fileName();

        // Save file path
        QString directory = fileInfo.path();

        // Set the text of the QLineEdit widget to the selected save file name
        reason_ui->reasonNameSave->setText(fileName);

        // Set the text of the QLineEdit widget to the selected save file path
        reason_ui->reasonSavePath->setText(directory);
    }
}

void Reason::resetReason()
{
    reason_filesMap.clear();
    reason_ui->reasonFileNames->clear();
    reason_ui->reasonNameSave->clear();
    reason_ui->reasonSavePath->clear();
    reason_ui->reasonOption->setCurrentIndex(0);
}

void Reason::reasonFiles()
{
    QString selectedFilePath = reason_filesMap.value(getSelectedFileName());
    QString result = getSavePath() + "/" + getNameSave();

    if (reason_filesMap.isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "You need at least one file to reason.");
        return;
    }
    if (getSavePath().isEmpty())
    {
        QMessageBox::warning(nullptr, "Error", "Please enter a file name and select a directory (Save As).");
        return;
    }
    if (getSelectedFileName().isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "Select a file to reason.");
        return;
    }

    // Construct system command
    QString command = "cd " + selectedFilePath + " && robot reason -i " +
                      getSelectedFileName() + " --reasoner " + getReason();
    if (reason_ui->reasonCreateOntology->isChecked())
    {
        command += " --create-new-ontology true";
    }
    if (reason_ui->reasonCreateOntologyAnnotation->isChecked())
    {
        command += " --create-new-ontology-with-annotations true";
    }
    if (reason_ui->reasonExcludeAxioms->isChecked())
    {
        command += " --exclude-duplicate-axioms true";
    }
    if (!reason_ui->reasonRemoveAxioms->isChecked())
    {
        command += " --remove-redundant-subclass-axioms false";
    }
    if (!reason_ui->reasonEquivalentAll->isChecked())
    {
        command += " --equivalent-classes-allowed all";
    }
    if (!reason_ui->reasonEquivalentAsserted->isChecked())
    {
        command += " --equivalent-classes-allowed asserted-only";
    }
    if (!reason_ui->reasonEquivalentNone->isChecked())
    {
        command += " --equivalent-classes-allowed none";
    }
    if (!reason_ui->reasonExcludeFalse->isChecked())
    {
        command += " --exclude-tautologies false";
    }
    if (!reason_ui->reasonExcludeAll->isChecked())
    {
        command += " --exclude-tautologies all";
    }
    if (!reason_ui->reasonExcludeStructural->isChecked())
    {
        command += " --exclude-tautologies structural";
    }
    QStringList axiomGeneratorOptions;
    if (reason_ui->SubClass->isChecked()) {
        axiomGeneratorOptions << "SubClass";
    }
    if (reason_ui->EquivalentClass->isChecked()) {
        axiomGeneratorOptions << "EquivalentClass";
    }
    if (reason_ui->DisjointClasses->isChecked()) {
        axiomGeneratorOptions << "DisjointClasses";
    }
    if (reason_ui->DataPropertyCharacteristic->isChecked()) {
        axiomGeneratorOptions << "DataPropertyCharacteristic";
    }
    if (reason_ui->EquivalentDataProperties->isChecked()) {
        axiomGeneratorOptions << "EquivalentDataProperties";
    }
    if (reason_ui->SubDataProperty->isChecked()) {
        axiomGeneratorOptions << "SubDataProperty";
    }
    if (reason_ui->ClassAssertion->isChecked()) {
        axiomGeneratorOptions << "ClassAssertion";
    }
    if (reason_ui->PropertyAssertion->isChecked()) {
        axiomGeneratorOptions << "PropertyAssertion";
    }
    if (reason_ui->EquivalentObjectProperty->isChecked()) {
        axiomGeneratorOptions << "EquivalentObjectProperty";
    }
    if (reason_ui->InverseObjectProperties->isChecked()) {
        axiomGeneratorOptions << "InverseObjectProperties";
    }
    if (reason_ui->ObjectPropertyCharacteristic->isChecked()) {
        axiomGeneratorOptions << "ObjectPropertyCharacteristic";
    }
    if (reason_ui->SubObjectProperty->isChecked()) {
        axiomGeneratorOptions << "SubObjectProperty";
    }
    if (reason_ui->ObjectPropertyRange->isChecked()) {
        axiomGeneratorOptions << "ObjectPropertyRange";
    }
    if (reason_ui->ObjectPropertyDomain->isChecked()) {
        axiomGeneratorOptions << "ObjectPropertyDomain";
    }
    if (!axiomGeneratorOptions.isEmpty()) {
        command += " --axiom-generators \"" + axiomGeneratorOptions.join(" ") + "\"";
    }
    command += " -o " + result;
    // System call
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

//------------------------------- Getter methods---------------------------------
QString Reason::getSavePath() const
{
    return reason_ui->reasonSavePath->text();
}

QString Reason::getNameSave() const
{
    return reason_ui->reasonNameSave->text();
}

QString Reason::getReason() const
{
    return reason_ui->reasonOption->currentText();
}

QString Reason::getSelectedFileName() const
{
    QListWidgetItem* selectedItem = reason_ui->reasonFileNames->currentItem();
    return (selectedItem) ? selectedItem->text() : QString();
}

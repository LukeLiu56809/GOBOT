#ifndef EXTRACT_H
#define EXTRACT_H

#include <QObject>
#include <QMap>
#include <QListWidget>
#include <QPushButton>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Extract : public QObject
{
    Q_OBJECT

public:
    explicit Extract(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getMethod() const;
    QString getUpperTerm() const;
    QString getLowerTerm() const;
    QString getBranchTerm() const;
    QString getUpperTermFile() const;
    QString getLowerTermFile() const;
    QString getBranchTermFile() const;
    QString getSourceMap() const;
    QString getPrefix() const;

public slots:
    void addFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void addTerms();
    void addTermFiles(QString& path, QLineEdit* file);
    void removeFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void removeTerms();
    void saveFiles();
    void resetExtract();
    void extractFiles();

private slots:
    void onExtractAddOntologyClicked();
    void onExtractAddTermClicked();
    void onExtractAddTermFileClicked();

    void onExtractRemoveOntologyClicked();
    void onExtractRemoveTermClicked();
    void onExtractRemoveTermFileClicked();

    void onUpperTermClicked(bool checked);
    void onLowerTermClicked(bool checked);
    void onBranchTermClicked(bool checked);
    void onUpperTermFileClicked(bool checked);
    void onLowerTermFileClicked(bool checked);
    void onBranchTermFileClicked(bool checked);
    void onPrefixClicked(bool checked);
    void onSourceMapClicked(bool checked);

    void onUpperTermFileSaveClicked();
    void onLowerTermFileSaveClicked();
    void onBranchTermFileSaveClicked();
    void onSourceMapSaveClicked();

    void onExtractSaveAsClicked();
    void onExtractResetClicked();
    void onExtractButtonClicked();

private:
    QMap<QString, QString> extract_ontologyMap;
    QMap<QString, QString> extract_termFileMap;
    QStringList extractTerms;
    QString upperFilePath;
    QString lowerFilePath;
    QString branchFilePath;
    QString sourceMapFilePath;
    Ui::MainWindow *extract_ui;

    QLineEdit *extractUpperTermName;
    QLineEdit *extractLowerTermName;
    QLineEdit *extractBranchTermName;

    QPushButton *extractUpperTermFileSave;
    QPushButton *extractLowerTermFileSave;
    QPushButton *extractBranchTermFileSave;
    QLineEdit *extractUpperTermFileName;
    QLineEdit *extractLowerTermFileName;
    QLineEdit *extractBranchTermFileSaveName;

    QLineEdit *extractPrefixName;

    QPushButton *extractSourceMapSave;
    QLineEdit *extractSourceMapSaveName;
};

#endif // EXTRACT_H

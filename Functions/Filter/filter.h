#ifndef FILTER_H
#define FILTER_H

#include <QObject>
#include <QMap>
#include <QLineEdit>
#include <QListWidget>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Filter : public QObject
{
    Q_OBJECT

public:
    explicit Filter(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;

public slots:
    void addImport();
    void addTerms(QListWidget *listWidget, QList<QString> &termsList);
    void addTermFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void removeFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void removeTerms(QListWidget *listWidget, QList<QString> &termsList);
    void saveFiles();
    void resetFilter();
    void filterFiles();

private slots:
    void onFilterAddOntologyClicked();
    void onFilterGeneralAddTermClicked();
    void onFilterExcludeAddTermClicked();
    void onFilterIncludeAddTermClicked();
    void onFilterGeneralAddTermFileClicked();
    void onFilterExcludeAddTermFileClicked();
    void onFilterIncludeAddTermFileClicked();

    void onFilterRemoveOntologyClicked();
    void onFilterGeneralRemoveTermClicked();
    void onFilterExcludeRemoveTermClicked();
    void onFilterIncludeRemoveTermClicked();
    void onFilterGeneralRemoveTermFileClicked();
    void onFilterExcludeRemoveTermFileClicked();
    void onFilterIncludeRemoveTermFileClicked();

    void onFilterSaveAsClicked();
    void onFilterResetClicked();
    void onFilterButtonClicked();

private:
    QMap<QString, QString> filter_filesMap;
    QMap<QString, QString> generalTermFileMap;
    QMap<QString, QString> excludeTermFileMap;
    QMap<QString, QString> includeTermFileMap;
    QList<QString> generalTerms;
    QList<QString> excludeTerms;
    QList<QString> includeTerms;
    Ui::MainWindow *filter_ui;
};

#endif // FILTER_H

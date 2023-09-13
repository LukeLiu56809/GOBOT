#ifndef REMOVE_H
#define REMOVE_H

#include <QObject>
#include <QMap>
#include <QLineEdit>
#include <QListWidget>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Remove : public QObject
{
    Q_OBJECT

public:
    explicit Remove(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;

public slots:
    void addImport();
    void addTerms(QListWidget *listWidget, QList<QString> &termsList);
    void addTermFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void removeFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void removeTerms(QListWidget *listWidget, QList<QString> &termsList);
    void saveFiles();
    void resetRemove();
    void removeFiles();

private slots:
    void onRemoveAddOntologyClicked();
    void onRemoveGeneralAddTermClicked();
    void onRemoveExcludeAddTermClicked();
    void onRemoveIncludeAddTermClicked();
    void onRemoveGeneralAddTermFileClicked();
    void onRemoveExcludeAddTermFileClicked();
    void onRemoveIncludeAddTermFileClicked();

    void onRemoveRemoveOntologyClicked();
    void onRemoveGeneralRemoveTermClicked();
    void onRemoveExcludeRemoveTermClicked();
    void onRemoveIncludeRemoveTermClicked();
    void onRemoveGeneralRemoveTermFileClicked();
    void onRemoveExcludeRemoveTermFileClicked();
    void onRemoveIncludeRemoveTermFileClicked();

    void onRemoveSaveAsClicked();
    void onRemoveResetClicked();
    void onRemoveButtonClicked();

private:
    QMap<QString, QString> remove_filesMap;
    QMap<QString, QString> generalTermFileMap;
    QMap<QString, QString> excludeTermFileMap;
    QMap<QString, QString> includeTermFileMap;
    QList<QString> generalTerms;
    QList<QString> excludeTerms;
    QList<QString> includeTerms;
    Ui::MainWindow *remove_ui;
};

#endif // REMOVE_H

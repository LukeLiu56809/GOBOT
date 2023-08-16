#ifndef QUERY_H
#define QUERY_H

#include <QObject>
#include <QMap>
#include <QLineEdit>
#include <QSpinBox>
#include <QPushButton>
#include <QString>
#include <QListWidget>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Query : public QObject
{
    Q_OBJECT

public:
    explicit Query(Ui::MainWindow *ui, QObject *parent = nullptr);

    QString getCatalog() const;
    QString getQueryTDBDirectoryName() const;
    QString getQuerySelectTDBName() const;
    QString getSavePath() const;
    QString getNameSave() const;

public slots:
    void addFiles(QMap<QString, QString>& filesMap, QListWidget* file);
    void addUpdates();
    void addCatalog();
    void removeFiles(QMap<QString, QString>& filesMap, QListWidget* file);
    void saveFiles();
    void resetQuery();
    void queryFiles();

private slots:
    void onQueryAddOntologyClicked();
    void onQueryAddQueryClicked();
    void onQueryAddUpdateClicked();

    void onQueryRemoveOntologyClicked();
    void onQueryRemoveQueryClicked();
    void onQueryRemoveUpdateClicked();

    void onQueryCatalogSaveClicked();
    void onCatalogClicked(bool checked);

    void onQuerySaveAsClicked();
    void onQueryResetClicked();
    void onQueryButtonClicked();

private:
    QMap<QString, QString> ontology_filesMap;
    QMap<QString, QString> query_filesMap;
    QMap<QString, QString> updates_filesMap;
    QString catalogPath;
    Ui::MainWindow *query_ui;
    QPushButton *queryCatalogSave;
    QLineEdit *queryCatalogSaveName;
};

#endif // QUERY_H

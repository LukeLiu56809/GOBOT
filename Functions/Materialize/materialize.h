#ifndef MATERIALIZE_H
#define MATERIALIZE_H

#include <QObject>
#include <QMap>
#include <QListWidget>
#include <QPushButton>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Materialize : public QObject
{
    Q_OBJECT

public:
    explicit Materialize(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getReason() const;

public slots:
    void addFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void addTerms();
    void addTermFiles(QString& path, QLineEdit* file);
    void removeFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void removeTerms();
    void saveFiles();
    void resetMaterialize();
    void materializeFiles();

private slots:
    void onMaterializeAddOntologyClicked();
    void onMaterializeAddTermClicked();
    void onMaterializeAddTermFileClicked();

    void onMaterializeRemoveOntologyClicked();
    void onMaterializeRemoveTermClicked();
    void onMaterializeRemoveTermFileClicked();

    void onMaterializeSaveAsClicked();
    void onMaterializeResetClicked();
    void onMaterializeButtonClicked();

private:
    QMap<QString, QString> materialize_ontologyMap;
    QMap<QString, QString> materialize_termFileMap;
    QStringList materializeTerms;
    Ui::MainWindow *materialize_ui;
};
#endif // MATERIALIZE_H

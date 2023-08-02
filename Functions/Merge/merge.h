#ifndef MERGE_H
#define MERGE_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Merge : public QObject
{
    Q_OBJECT

public:
    explicit Merge(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    int getImportClosureIndex() const;
    int getOntologyAnnotationsIndex() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetMerge();
    void mergeFiles();

private slots:
    void onMergeAddFileClicked();
    void onMergeRemoveFileClicked();
    void onMergeSaveAsClicked();
    void onMergeResetClicked();
    void onMergeButtonClicked();

private:
    QMap<QString, QString> merge_filesMap;
    Ui::MainWindow *merge_ui;
};

#endif // MERGE_H

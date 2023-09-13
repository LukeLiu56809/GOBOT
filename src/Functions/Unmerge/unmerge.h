#ifndef UNMERGE_H
#define UNMERGE_H

#include <QObject>
#include <QListWidget>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Unmerge : public QObject
{
    Q_OBJECT

public:
    explicit Unmerge(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;

public slots:
    void addFirstFile();
    void addMoreFiles();
    void removeFiles(QListWidget* list2, QMap<QString, QString> map2);
    void saveFiles();
    void resetUnmerge();
    void unmergeFiles();

private slots:
    void onUnmergeAddFirstFileClicked();
    void onUnmergeAddMoreFilesClicked();
    void onUnmergeRemoveFirstFileClicked();
    void onUnmergeRemoveMoreFilesClicked();
    void onUnmergeSaveAsClicked();
    void onUnmergeResetClicked();
    void onUnmergeButtonClicked();

private:
    QMap<QString, QString> unmerge_firstMap;
    QMap<QString, QString> unmerge_moreMap;
    Ui::MainWindow *unmerge_ui;
};

#endif // UNMERGE_H

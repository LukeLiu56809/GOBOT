#ifndef REDUCE_H
#define REDUCE_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Reduce : public QObject
{
    Q_OBJECT

public:
    explicit Reduce(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetReduce();
    void reduceFiles();

private slots:
    void onReduceAddFileClicked();
    void onReduceRemoveFileClicked();
    void onReduceSaveAsClicked();
    void onReduceResetClicked();
    void onReduceButtonClicked();

private:
    QMap<QString, QString> reduce_filesMap;
    Ui::MainWindow *reduce_ui;
};

#endif // REDUCE_H

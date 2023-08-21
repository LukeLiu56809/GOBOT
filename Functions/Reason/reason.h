#ifndef REASON_H
#define REASON_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Reason : public QObject
{
    Q_OBJECT

public:
    explicit Reason(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;
    QString getReason() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetReason();
    void reasonFiles();

private slots:
    void onReasonAddFileClicked();
    void onReasonRemoveFileClicked();
    void onReasonSaveAsClicked();
    void onReasonResetClicked();
    void onReasonButtonClicked();

private:
    QMap<QString, QString> reason_filesMap;
    Ui::MainWindow *reason_ui;
};

#endif // REASON_H

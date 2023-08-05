#ifndef CONVERT_H
#define CONVERT_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Convert : public QObject
{
    Q_OBJECT

public:
    explicit Convert(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;
    QString getFormat() const;
    bool getCompress() const;
    bool getIgnoreChecks() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetConvert();
    void convertFiles();

private slots:
    void onConvertAddFileClicked();
    void onConvertRemoveFileClicked();
    void onConvertSaveAsClicked();
    void onConvertResetClicked();
    void onConvertButtonClicked();
    void onConvertFormatChanged(int index);

private:
    QMap<QString, QString> convert_filesMap;
    Ui::MainWindow *convert_ui;
};

#endif // CONVERT_H

#ifndef EXPORT_H
#define EXPORT_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Export : public QObject
{
    Q_OBJECT

public:
    explicit Export(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;
    QString getFormat() const;
    QString getHeader() const;
    QString getSort() const;
    QString getSplit() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetExport();
    void exportFiles();

private slots:
    void onExportAddFileClicked();
    void onExportRemoveFileClicked();
    void onExportSaveAsClicked();
    void onExportResetClicked();
    void onExportButtonClicked();
    void onExportHeaderClicked(bool checked);
    void onExportSortClicked(bool checked);
    void onExportSplitClicked(bool checked);

private:
    QMap<QString, QString> export_filesMap;
    Ui::MainWindow *export_ui;
};

#endif // EXPORT_H

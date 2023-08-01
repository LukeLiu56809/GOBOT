#ifndef COLLAPSE_H
#define COLLAPSE_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Collapse : public QObject
{
    Q_OBJECT

public:
    explicit Collapse(Ui::MainWindow *ui, QObject *parent = nullptr);

    QString getThreshold() const;
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetCollapse();
    void collapseFiles();

private slots:
    void onCollapseAddFileClicked();
    void onCollapseRemoveFileClicked();
    void onCollapseSaveAsClicked();
    void onCollapseResetClicked();
    void onCollapseButtonClicked();

private:
    QMap<QString, QString> c_filesMap;
    Ui::MainWindow *c_ui;
};

#endif // COLLAPSE_H

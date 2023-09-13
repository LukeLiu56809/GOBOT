#ifndef RELAX_H
#define RELAX_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Relax : public QObject
{
    Q_OBJECT

public:
    explicit Relax(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetRelax();
    void relaxFiles();

private slots:
    void onRelaxAddFileClicked();
    void onRelaxRemoveFileClicked();
    void onRelaxSaveAsClicked();
    void onRelaxResetClicked();
    void onRelaxButtonClicked();

private:
    QMap<QString, QString> relax_filesMap;
    Ui::MainWindow *relax_ui;
};

#endif // RELAX_H

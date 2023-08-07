#ifndef REPAIR_H
#define REPAIR_H

#include <QObject>
#include <QMap>
#include <QLineEdit>
#include <QPushButton>
#include <QString>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Repair : public QObject
{
    Q_OBJECT

public:
    explicit Repair(Ui::MainWindow *ui, QObject *parent = nullptr);

    QString getClasses() const;
    QString getTerms() const;
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetRepair();
    void repairFiles();

private slots:
    void onRepairAddFileClicked();
    void onRepairRemoveFileClicked();
    void onRepairSaveAsClicked();
    void onRepairResetClicked();
    void onRepairButtonClicked();
    void onRepairClassesClicked(bool checked);
    void onRepairTermsClicked(bool checked);
    void onRepairTermsFileClicked();

private:
    QMap<QString, QString> repair_filesMap;
    QString termPath;
    Ui::MainWindow *repair_ui;
    QLineEdit *repairClassesEdit;
    QLineEdit *repairTermsEdit;
    QPushButton *repairTermsFile;
};

#endif // REPAIR_H

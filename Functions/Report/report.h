#ifndef REPORT_H
#define REPORT_H

#include <QObject>
#include <QMap>
#include <QSpinBox>
#include <QComboBox>
#include <QPushButton>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Report : public QObject
{
    Q_OBJECT

public:
    explicit Report(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;
    QString getFormat() const;
    QString getViolations() const;
    QString getFailOn() const;
    QString getProfileName() const;
    QString getReportTDBDirectoryName() const;
    QString getLimit() const;

public slots:
    void addFiles();
    void addURI();
    void reportDirectory();
    void addProfile();

    void removeFiles();
    void removeURI();

    void saveFiles();
    void resetReport();
    void reportFiles();

private slots:
    void onReportAddFileClicked();
    void onReportAddURIClicked();
    void onAddTDBDirectoryClicked();
    void onDefineProfileSaveClicked();

    void onReportRemoveFileClicked();
    void onReportRemoveURIClicked();

    void onReportSaveAsClicked();
    void onReportResetClicked();
    void onReportButtonClicked();
    void onViolationsClicked(bool checked);
    void onFailOnClicked(bool checked);
    void onDefineProfileClicked(bool checked);
    void onLimitClicked(bool checked);

private:
    QMap<QString, QString> report_filesMap;
    QStringList URITerms;
    QString profilePath;
    Ui::MainWindow *report_ui;

    QSpinBox *violationsNumber;
    QComboBox *failOnType;
    QPushButton *defineProfileSave;
    QLineEdit *defineProfileName;
    QSpinBox *limitNumber;
};

#endif // REPORT_H

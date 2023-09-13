#ifndef EXPAND_H
#define EXPAND_H

#include <QObject>
#include <QMap>
#include <QLineEdit>
#include <QSpinBox>
#include <QPushButton>
#include <QString>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Expand : public QObject
{
    Q_OBJECT

public:
    explicit Expand(Ui::MainWindow *ui, QObject *parent = nullptr);

    QString getTerm() const;
    QString getTermFile() const;
    QString getNoTermFile() const;
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetExpand();
    void expandFiles();

private slots:
    void onExpandAddFileClicked();
    void onExpandRemoveFileClicked();
    void onExpandSaveAsClicked();
    void onExpandResetClicked();
    void onExpandButtonClicked();
    void onExpandTermFile(bool checked);
    void onExpandNoTermFile(bool checked);
    void onExpandTermFileSaveClicked();
    void onExpandNoTermFileSaveClicked();

private:
    QMap<QString, QString> expand_filesMap;
    QString termPath;
    QString noTermPath;
    Ui::MainWindow *expand_ui;
    QLineEdit *expandTermSaveName;
    QLineEdit *expandNoTermSaveName;
    QPushButton *expandTermsFile;
    QPushButton *expandNoTermsFile;
};

#endif // EXPAND_H

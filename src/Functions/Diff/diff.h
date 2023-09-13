#ifndef DIFF_H
#define DIFF_H

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

class Diff : public QObject
{
    Q_OBJECT

public:
    explicit Diff(Ui::MainWindow *ui, QObject *parent = nullptr);

    QString getLeftOntology() const;
    QString getRightOntology() const;
    QString getLeftIRI() const;
    QString getRightIRI() const;
    QString getLeftCatalog() const;
    QString getRightCatalog() const;
    QString getSavePath() const;
    QString getNameSave() const;

public slots:
    void addFiles(QMap<QString, QString>& filesMap, QLineEdit* fileNameLineEdit);
    void addCatalog(QLineEdit* catalogFile, QString& termPath);
    void saveFiles();
    void resetDiff();
    void diffFiles();

private slots:

    void onDiffSaveAsClicked();
    void onDiffResetClicked();
    void onDiffButtonClicked();

    void onLeftOntologySaveClicked();
    void onLeftOntologyClicked(bool checked);
    void onLeftIRIClicked(bool checked);
    void onLeftCatalogClicked(bool checked);
    void onLeftCatalogSaveClicked();

    void onRightOntologySaveClicked();
    void onRightOntologyClicked(bool checked);
    void onRightIRIClicked(bool checked);
    void onRightCatalogClicked(bool checked);
    void onRightCatalogSaveClicked();

private:
    QMap<QString, QString> ldiff_filesMap;
    QMap<QString, QString> rdiff_filesMap;
    QString ltermPath;
    QString rtermPath;
    Ui::MainWindow *diff_ui;

    QLineEdit *leftOntologySaveName;
    QLineEdit *leftIRIName;
    QLineEdit *leftCatalogSaveName;
    QPushButton *leftOntologySave;
    QPushButton *leftCatalogSave;

    QLineEdit *rightOntologySaveName;
    QLineEdit *rightIRIName;
    QLineEdit *rightCatalogSaveName;
    QPushButton *rightOntologySave;
    QPushButton *rightCatalogSave;
};

#endif // DIFF_H

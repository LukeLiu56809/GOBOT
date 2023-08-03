#ifndef COLLAPSE_H
#define COLLAPSE_H

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

class Collapse : public QObject
{
    Q_OBJECT

public:
    explicit Collapse(Ui::MainWindow *ui, QObject *parent = nullptr);

    QString getThreshold() const;
    QString getPreciousClasses() const;
    QString getPreciousTerms() const;
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
    void onCollapseThresholdClicked(bool checked);
    void onCollapsePreciousClassesClicked(bool checked);
    void onCollapsePreciousTermsClicked(bool checked);
    void onCollapsePreciousTermsFileClicked();

private:
    QMap<QString, QString> collapse_filesMap;
    QString termPath;
    Ui::MainWindow *collapse_ui;
    QSpinBox *collapseThresholdEdit;
    QLineEdit *collapsePreciousClassesEdit;
    QLineEdit *collapsePreciousTermsEdit;
    QPushButton *collapsePreciousTermsFile;
};

#endif // COLLAPSE_H

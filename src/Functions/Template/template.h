#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <QObject>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Template : public QObject
{
    Q_OBJECT

public:
    explicit Template(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getPrefix() const;
    QString getIRI() const;
    int getImportClosureIndex() const;
    int getMergeIndex() const;
    QString getErrorPath() const;
    QString getSavePath() const;
    QString getNameSave() const;

public slots:
    void addFirstFile();
    void addMoreFiles();
    void addPath();
    void removeFiles(QListWidget* files, QMap<QString, QString> map);
    void saveFiles();
    void resetTemplate();
    void templateFiles();

private slots:
    void onTemplateAddFirstFileClicked();
    void onTemplateAddMoreFilesClicked();
    void onTemplateRemoveFirstFileClicked();
    void onTemplateRemoveMoreFilesClicked();
    void onTemplateSaveAsClicked();
    void onTemplateResetClicked();
    void onTemplateButtonClicked();
    void onTemplatePrefixClicked(bool checked);
    void onTemplateIRIClicked(bool checked);
    void onTemplateErrorClicked(bool checked);
    void onTemplateErrorPathClicked();

private:
    QMap<QString, QString> template_firstMap;
    QMap<QString, QString> template_moreMap;
    QLineEdit *templatePrefixName;
    QLineEdit *templateIRIName;
    QPushButton *templateErrorPath;
    QLineEdit *templateErrorPathName;
    Ui::MainWindow *template_ui;
};

#endif // TEMPLATE_H

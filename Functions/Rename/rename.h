#ifndef RENAME_H
#define RENAME_H

#include <QObject>
#include <QMap>
#include <QListWidget>
#include <QPushButton>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Rename : public QObject
{
    Q_OBJECT

public:
    explicit Rename(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getMappingPrefix() const;
    QString getAddPrefix() const;

public slots:
    void addFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void addTerms();
    void addTermFiles(QString& path, QLineEdit* file);
    void addMapping();
    void removeFiles(QMap<QString, QString>& filesMap, QListWidget* files);
    void removeTerms();
    void saveFiles();
    void resetRename();
    void renameFiles();

private slots:
    void onRenameAddOntologyClicked();
    void onRenameAddTermClicked();
    void onRenameAddMappingFileClicked();

    void onRenameRemoveOntologyClicked();
    void onRenameRemoveTermClicked();
    void onRenameRemoveMappingFileClicked();

    void onPrefixMappingsClicked(bool checked);
    void onPrefixMappingsSaveClicked();
    void onAddPrefixClicked(bool checked);

    void onRenameSaveAsClicked();
    void onRenameResetClicked();
    void onRenameButtonClicked();

private:
    QMap<QString, QString> rename_ontologyMap;
    QMap<QString, QString> rename_mappingFileMap;
    QStringList mappingTerms;
    QString mappingPath;
    Ui::MainWindow *rename_ui;

    QPushButton *renamePrefixMappingsSave;
    QLineEdit *renamePrefixMappingsName;

    QLineEdit *renamePrefixName;
};
#endif // RENAME_H

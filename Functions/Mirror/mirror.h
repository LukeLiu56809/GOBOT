#ifndef MIRROR_H
#define MIRROR_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Mirror : public QObject
{
    Q_OBJECT

public:
    explicit Mirror(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetMirror();
    void mirrorFiles();

private slots:
    void onMirrorAddFileClicked();
    void onMirrorRemoveFileClicked();
    void onMirrorSaveAsClicked();
    void onMirrorResetClicked();
    void onMirrorButtonClicked();

private:
    QMap<QString, QString> mirror_filesMap;
    Ui::MainWindow *mirror_ui;
};


#endif // MIRROR_H

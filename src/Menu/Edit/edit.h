#ifndef EDIT_H
#define EDIT_H

#include <QObject>
#include <QMainWindow>
#include <QMenu>
#include <QAction>

class Edit : public QObject
{
    Q_OBJECT

public:
    Edit(QMainWindow *parent = nullptr);


private slots:
    void undoActionTriggered();
    void redoActionTriggered();
    void cutActionTriggered();
    void copyActionTriggered();
    void pasteActionTriggered();
    void deleteActionTriggered();
    void replaceActionTriggered();

private:
    void createEditMenu(QMainWindow *parent);
    QAction *undoAction;
    QAction *redoAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *deleteAction;
    QAction *replaceAction;
};

#endif // EDIT_H

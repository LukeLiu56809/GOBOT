#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QMainWindow>
#include <QMenu>
#include <QAction>

class Window : public QObject
{
    Q_OBJECT

public:
    Window(QMainWindow *parent = nullptr);

private slots:
    void newWindowActionTriggered();
    void closeWindowActionTriggered();

private:
    void createWindowMenu(QMainWindow *parent);
    QAction *newWindowAction;
    QAction *closeWindowAction;
};

#endif // WINDOW_H

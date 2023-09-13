#include "window.h"
#include "mainwindow.h"
#include <QMenuBar>
#include <QKeySequence>
#include <QApplication>

Window::Window(QMainWindow *parent) : QObject(parent)
{
    createWindowMenu(parent);
}

void Window::createWindowMenu(QMainWindow *parent)
{
    QMenu *windowMenu = parent->menuBar()->addMenu(tr("Window"));

    newWindowAction = new QAction(tr("New Window"), parent);
    closeWindowAction = new QAction(tr("Close Window"), parent);

    newWindowAction->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_N));
    closeWindowAction->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_W));

    connect(newWindowAction, &QAction::triggered, this, &Window::newWindowActionTriggered);
    connect(closeWindowAction, &QAction::triggered, this, &Window::closeWindowActionTriggered);

    windowMenu->addAction(newWindowAction);
    windowMenu->addAction(closeWindowAction);
}

void Window::newWindowActionTriggered()
{
    MainWindow *newWindow = new MainWindow();
    newWindow->show();
}

void Window::closeWindowActionTriggered()
{
    QMainWindow *mainWin = qobject_cast<QMainWindow *>(parent());
    if (mainWin) {
        mainWin->close();
    }
}

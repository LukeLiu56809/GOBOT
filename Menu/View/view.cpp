#include "view.h"
#include <QMenuBar>
#include <QKeySequence>

View::View(QMainWindow *parent) : QObject(parent)
{
    createViewMenu(parent);
}

void View::createViewMenu(QMainWindow *parent)
{
    QMenu *viewMenu = parent->menuBar()->addMenu(tr("View"));

    exitFullScreenAction = new QAction(tr("Exit Full Screen"), parent);
    minimizeAction = new QAction(tr("Minimize"), parent);

    minimizeAction->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_M));

    connect(exitFullScreenAction, &QAction::triggered, this, &View::exitFullScreenActionTriggered);
    connect(minimizeAction, &QAction::triggered, this, &View::minimizeActionTriggered);


    viewMenu->addAction(exitFullScreenAction);
    viewMenu->addAction(minimizeAction);
}

void View::exitFullScreenActionTriggered()
{
    QMainWindow *mainWin = qobject_cast<QMainWindow *>(parent());
    if (mainWin) {
        if (mainWin->isFullScreen()) {
            mainWin->showNormal();
        }
    }
}

void View::minimizeActionTriggered()
{
    QMainWindow *mainWin = qobject_cast<QMainWindow *>(parent());
    if (mainWin) {
        mainWin->showMinimized();
    }
}


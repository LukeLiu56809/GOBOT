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

    minimizeAction = new QAction(tr("Minimize"), parent);

    connect(minimizeAction, &QAction::triggered, this, &View::minimizeActionTriggered);

    viewMenu->addAction(minimizeAction);
}

void View::minimizeActionTriggered()
{
    QMainWindow *mainWin = qobject_cast<QMainWindow *>(parent());
    if (mainWin) {
        mainWin->showMinimized();
    }
}

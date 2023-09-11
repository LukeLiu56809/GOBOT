#include "help.h"
#include <QMenuBar>
#include <QDesktopServices>
#include <QUrl>

Help::Help(QMainWindow *parent) : QObject(parent)
{
    createHelpMenu(parent);
}

void Help::createHelpMenu(QMainWindow *parent)
{
    QMenu *helpMenu = parent->menuBar()->addMenu(tr("Help"));

    openHelpAction = new QAction(tr("ROBOT Help"), parent);

    connect(openHelpAction, &QAction::triggered, this, &Help::openHelpWebsite);

    helpMenu->addAction(openHelpAction);
}

void Help::openHelpWebsite()
{
    QUrl websiteUrl("https://robot.obolibrary.org/");
    QDesktopServices::openUrl(websiteUrl);
}

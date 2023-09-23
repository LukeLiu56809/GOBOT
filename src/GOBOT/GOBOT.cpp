#include "mainwindow.h"
#include "../Startup/startup.h"
#include "../RobotDownload/robotdownload.h"
#include <QApplication>
#include <QCoreApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap(":/images/SplashScreen.png");
    QSplashScreen splash(pixmap);
    splash.show();
    Startup startup;
    startup.runStartupTasks();
    RobotDownload robotDownload;
    robotDownload.downloadFiles();
    QTimer::singleShot(3000, &splash, &QSplashScreen::close);

    MainWindow w;
    w.show();

    return a.exec();
}

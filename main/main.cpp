#include "mainwindow.h"
#include "../Startup/startup.h"
#include "../RobotDownload/robotdownload.h"
#include <QApplication>
#include <QDir>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create the splash screen
    QPixmap pixmap(":/images/SplashScreen.png"); // Adjust the image path as needed
    QSplashScreen splash(pixmap);
    splash.show();
    Startup startup;
    startup.runStartupTasks();

    RobotDownload robotDownload;
    robotDownload.downloadFiles();
    // Delay for a few seconds (3 seconds in this example)
    QTimer::singleShot(3000, &splash, &QSplashScreen::close);

    // Create the main window
    MainWindow w;
    w.show();

    return a.exec();
}

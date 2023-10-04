#include "mainwindow.h"
#include "../Startup/startup.h"
#include <QApplication>
#include <QCoreApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle("Fusion");
    QPixmap pixmap(":/images/SplashScreen.png");
    QSplashScreen splash(pixmap);
    splash.show();
    Startup startup;
    startup.runStartupTasks();
    QTimer::singleShot(3000, &splash, &QSplashScreen::close);

    MainWindow w;
    w.show();

    return a.exec();
}

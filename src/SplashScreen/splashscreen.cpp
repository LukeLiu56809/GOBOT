#include "splashscreen.h"
#include <QResizeEvent>

SplashScreen::SplashScreen(QMainWindow* mainWin, const QPixmap &pixmap)
    : QSplashScreen(pixmap), mainWindow(mainWin)
{
}

void SplashScreen::resizeEvent(QResizeEvent* event)
{
    QSplashScreen::resize(event->size());
}

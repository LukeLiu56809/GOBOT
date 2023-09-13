#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QSplashScreen>
#include <QMainWindow>

class SplashScreen : public QSplashScreen
{
    Q_OBJECT

public:
    SplashScreen(QMainWindow* mainWin, const QPixmap &pixmap);

private:
    QMainWindow* mainWindow;
    void resizeEvent(QResizeEvent* event);
};

#endif // SPLASHSCREEN_H

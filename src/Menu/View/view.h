#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include <QMainWindow>

class QAction;

class View : public QObject
{
    Q_OBJECT

public:
    View(QMainWindow *parent = nullptr);

private slots:
    void exitFullScreenActionTriggered();
    void minimizeActionTriggered();

private:
    void createViewMenu(QMainWindow *parent);
    QAction *exitFullScreenAction;
    QAction *minimizeAction;
};

#endif // VIEW_H

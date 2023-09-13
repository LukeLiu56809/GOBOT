#ifndef HELP_H
#define HELP_H

#include <QObject>
#include <QMainWindow>
#include <QAction>

class Help : public QObject
{
    Q_OBJECT

public:
    Help(QMainWindow *parent = nullptr);

private slots:
    void openHelpWebsite();

private:
    void createHelpMenu(QMainWindow *parent);
    QAction *openHelpAction;
};

#endif // HELP_H

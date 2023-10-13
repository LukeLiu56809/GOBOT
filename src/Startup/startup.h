#ifndef STARTUP_H
#define STARTUP_H

#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

class Startup
{
public:
    Startup();

    void runStartupTasks();
    bool checkConfigFile();
    void createConfigFile();

private:
    QString winAppDir;
    QString robotJarDirectory;
};

#endif // STARTUP_H

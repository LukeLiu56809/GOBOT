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
    void askUserToDownloadRobotJar();
    bool checkConfigFile();
    void createConfigFile(const QString& directory);

private:
    QString robotJarDirectory;
};

#endif // STARTUP_H

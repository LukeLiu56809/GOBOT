#include "startup.h"
#include "../RobotDownload/robotdownload.h"
#include <QCoreApplication>
#include <QStandardPaths>
#include <QFile>
#include <QTextStream>
#include <QThread>

Startup::Startup()
{
}

void Startup::runStartupTasks()
{
    if (!checkConfigFile())
    {
        createConfigFile();
    }
    if (QSysInfo::productType() == "windows")
    {
        winAppDir = QCoreApplication::applicationDirPath();
        QString jarFilePath = winAppDir + "\\robot.jar";
        QString batchFilePath = winAppDir + "\\robot.bat";
        if (!QFile::exists(jarFilePath)||!QFile::exists(batchFilePath))
        {
            RobotDownload robotDownload;
            robotDownload.downloadFiles();
        }
        QThread::msleep(3000);
    }
    else
    {
        RobotDownload robotDownload;
        robotDownload.downloadFiles();
    }
}

bool Startup::checkConfigFile()
{
    QString configFilePath = QCoreApplication::applicationDirPath() + "/robot_config.txt";
    return QFile::exists(configFilePath);
}

void Startup::createConfigFile()
{
    QString executableDir = QCoreApplication::applicationDirPath();
    QString configFilePath = executableDir + "/robot_config.txt";

    QFile configFile(configFilePath);

    if (configFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&configFile);
        configFile.close();
    }
}

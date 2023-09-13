#include "startup.h"
#include <QCoreApplication>
#include <QStandardPaths>
#include <QFile>
#include <QTextStream>

Startup::Startup()
{
}

void Startup::runStartupTasks()
{
    if (!checkConfigFile())
    {
        createConfigFile();
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

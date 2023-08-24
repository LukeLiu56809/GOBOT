#include "startup.h"

#include <QCoreApplication>
#include <QStandardPaths>

Startup::Startup()
{
    robotJarDirectory = "";
}

void Startup::runStartupTasks()
{
    if (!checkConfigFile())
    {
        askUserToDownloadRobotJar();
        createConfigFile(robotJarDirectory);
    }
}

bool Startup::checkConfigFile()
{
    QString configFilePath = QCoreApplication::applicationDirPath() + "/robot_config.txt";
    return QFile::exists(configFilePath);
}

void Startup::createConfigFile(const QString& directory)
{
    QString executableDir = QCoreApplication::applicationDirPath();  // Get the directory of the executable
    QString configFilePath = executableDir + "/robot_config.txt";   // Create the full path for the config file

    QFile configFile(configFilePath);

    if (configFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&configFile);
        out << "ROBOT Directory: " << directory;
        configFile.close();
        qDebug() << "Config File Created at Path:" << configFilePath;
    }
}

void Startup::askUserToDownloadRobotJar()
{
    robotJarDirectory = QFileDialog::getExistingDirectory(nullptr, "Select Robot JAR Directory", QDir::homePath());
}





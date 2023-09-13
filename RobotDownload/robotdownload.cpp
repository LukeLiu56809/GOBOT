#include "robotdownload.h"
#include <QCoreApplication>
#include <QDebug>
#include <QProcess>
#include <QStandardPaths>
#include <QFile>
#include <QFileInfo>
#include <QSysInfo>

RobotDownload::RobotDownload(QObject *parent)
    : QObject(parent)
{
    appDir = QCoreApplication::applicationDirPath();
    appDir = QFileInfo(appDir).path();
    appDir = QFileInfo(appDir).path();
    appDir = QFileInfo(appDir).path();
}

void RobotDownload::downloadFiles()
{
    downloadRobotJar();
    downloadRobotScript();
    makeScriptExecutable();
    addToPath();
}

void RobotDownload::downloadRobotJar()
{
    QString jarFilePath = appDir + "/robot.jar";

    if (!QFile::exists(jarFilePath))
    {
        QString downloadCommand;

        if (QSysInfo::productType() == "macos") {
            // macOS
            downloadCommand = QString("curl -L -o \"%1\" https://github.com/ontodev/robot/releases/download/v1.9.4/robot.jar").arg(jarFilePath);
        } else if (QSysInfo::productType() == "windows") {
            // Windows
            downloadCommand = QString("powershell -Command \"Invoke-WebRequest -Uri 'https://github.com/ontodev/robot/releases/download/v1.9.4/robot.jar' -OutFile '%1'\"").arg(jarFilePath);
        }

        system(downloadCommand.toUtf8());
    }
}

void RobotDownload::downloadRobotScript()
{
    QString scriptFilePath = appDir + "/robot";

    if (!QFile::exists(scriptFilePath))
    {
        QString downloadCommand;

        if (QSysInfo::productType() == "macos") {
            downloadCommand = QString("curl -L https://raw.githubusercontent.com/ontodev/robot/master/bin/robot > \"%1\"").arg(scriptFilePath);
        } else if (QSysInfo::productType() == "windows") {
            downloadCommand = QString("powershell -Command \"Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/ontodev/robot/master/bin/robot' -OutFile '%1'\"").arg(scriptFilePath);
        }

        system(downloadCommand.toUtf8());
    }
}

void RobotDownload::makeScriptExecutable()
{
    QString scriptFilePath = appDir + "/robot";

    if (QSysInfo::productType() == "macos") {
        system(QString("chmod +x \"%1\"").arg(scriptFilePath).toUtf8());
    }
}

void RobotDownload::addToPath()
{
    QProcessEnvironment environment = QProcessEnvironment::systemEnvironment();
    QString path = environment.value("PATH");

    QString pathSeparator;
    if (QSysInfo::productType() == "windows") {
        pathSeparator = ";";
    } else {
        pathSeparator = ":";
    }

    if (!path.contains(appDir)) {
        path.prepend(appDir + pathSeparator);
        QProcessEnvironment::systemEnvironment().insert("PATH", path);
        qputenv("PATH", path.toUtf8());
    }
}


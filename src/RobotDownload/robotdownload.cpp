#include "robotdownload.h"
#include <QCoreApplication>
#include <QDebug>
#include <QProcess>
#include <QStandardPaths>
#include <QFile>
#include <QFileInfo>
#include <QSysInfo>
#include <QDir>

RobotDownload::RobotDownload(QObject *parent)
    : QObject(parent)
{
    macAppDir = QCoreApplication::applicationDirPath();
    macAppDir = QFileInfo(macAppDir).path();
    macAppDir = QFileInfo(macAppDir).path();
    macAppDir = QFileInfo(macAppDir).path();

    winAppDir = QCoreApplication::applicationDirPath();
}

void RobotDownload::downloadFiles()
{
    downloadRobotJar();
    downloadRobotScript();
    createBatchScript();
    makeScriptExecutable();
    addToPath();
}

void RobotDownload::downloadRobotJar()
{
    QString jarFilePath;

    if (QSysInfo::productType() == "macos") {
        jarFilePath = macAppDir + "/robot.jar";
        if (!QFile::exists(jarFilePath))
        {
            QString downloadCommand = QString("curl -L -o \"%1\" https://github.com/ontodev/robot/releases/download/v1.9.5/robot.jar").arg(jarFilePath);
            system(downloadCommand.toUtf8());
        }
    } else if (QSysInfo::productType() == "windows") {
        jarFilePath = winAppDir + "\\robot.jar";
        if (!QFile::exists(jarFilePath))
        {
            QProcess process;
            process.start("powershell", QStringList() << "-ExecutionPolicy" << "Unrestricted" << "-Command" << "Invoke-WebRequest" << "-Uri" <<
                                            "https://github.com/ontodev/robot/releases/download/v1.9.5/robot.jar" << "-OutFile" << jarFilePath);
            process.waitForFinished();
        }
    }
}

void RobotDownload::downloadRobotScript()
{
    if (QSysInfo::productType() == "macos") {
        QString scriptFilePath = macAppDir + "/robot";

        if (!QFile::exists(scriptFilePath))
        {
            QString downloadCommand = QString("curl -L https://raw.githubusercontent.com/ontodev/robot/master/bin/robot > \"%1\"").arg(scriptFilePath);
            system(downloadCommand.toUtf8());
        }
    }
}

void RobotDownload::createBatchScript()
{
    if (QSysInfo::productType() == "windows")
    {
        QString scriptFilePath = winAppDir + "\\robot.bat";

        if (!QFile::exists(scriptFilePath))
        {
            QString batchScript = "java %ROBOT_JAVA_ARGS% -jar %~dp0robot.jar %*";

            QFile scriptFile(scriptFilePath);
            if (scriptFile.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QTextStream out(&scriptFile);
                out << batchScript;
                scriptFile.close();
            }
        }
    }
}

void RobotDownload::makeScriptExecutable()
{
    if (QSysInfo::productType() == "macos") {
        QString scriptFilePath = macAppDir + "/robot";
        system(QString("chmod +x \"%1\"").arg(scriptFilePath).toUtf8());
    } else if (QSysInfo::productType() == "windows") {
        QString icaclsCommand = QString("icacls \"%1\\robot.bat\" /grant Users:RX /T").arg(winAppDir);
        system(icaclsCommand.toUtf8());
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

    if (!path.contains(winAppDir) && QSysInfo::productType() == "windows") {
        path.prepend(winAppDir + pathSeparator);
        QProcessEnvironment::systemEnvironment().insert("PATH", path);
        qputenv("PATH", path.toUtf8());
    }
}

#ifndef ROBOTDOWNLOAD_H
#define ROBOTDOWNLOAD_H

#include <QObject>

class RobotDownload : public QObject
{
    Q_OBJECT

public:
    explicit RobotDownload(QObject *parent = nullptr);
    void downloadFiles();

private:
    QString appDir;

    void downloadRobotJar();
    void downloadRobotScript();
    void makeScriptExecutable();
    void addToPath();
};

#endif // ROBOTDOWNLOAD_H

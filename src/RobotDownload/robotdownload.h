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
    QString macAppDir;
    QString winAppDir;

    void downloadRobotJar();
    void downloadRobotScript();
    void createBatchScript();
    void makeScriptExecutable();
    void addToPath();
};

#endif // ROBOTDOWNLOAD_H

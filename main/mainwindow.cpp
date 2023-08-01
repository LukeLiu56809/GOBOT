#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mergeHandler = new Merge(ui, this);
    collapseHandler = new Collapse(ui, this);
    mirrorHandler = new Mirror(ui, this);

    QByteArray pathValue = qgetenv("PATH");
    QString pathString = QString::fromLocal8Bit(pathValue);

    qDebug() << "System Path:" << pathString;
}

MainWindow::~MainWindow()
{
    delete ui;
}

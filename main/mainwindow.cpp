#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QProcessEnvironment>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mergeHandler = new Merge(ui, this);
    collapseHandler = new Collapse(ui, this);
    mirrorHandler = new Mirror(ui, this);
    relaxHandler = new Relax(ui, this);
    reduceHandler = new Reduce(ui, this);
    convertHandler = new Convert(ui, this);
    validateHandler = new Validate(ui, this);
    repairHandler = new Repair(ui, this);
    unmergeHandler = new Unmerge(ui, this);
    measureHandler = new Measure(ui, this);

    //QString systemPath = QProcessEnvironment::systemEnvironment().value("PATH");
    //ui->systemPath->setText(systemPath);
}

MainWindow::~MainWindow()
{
    delete ui;
}


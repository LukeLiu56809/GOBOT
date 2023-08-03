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
    relaxHandler = new Relax(ui, this);
    reduceHandler = new Reduce(ui, this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


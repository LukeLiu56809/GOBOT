#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "../Startup/startup.h"
#include "../RobotDownload/robotdownload.h"
#include <QSplashScreen>
#include <QTimer>
#include <QProcessEnvironment>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Edit *editMenu = new Edit(this);
    View *viewMenu = new View(this);
    Window *windowMenu = new Window(this);
    Help *helpMenu = new Help(this);

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
    expandHandler = new Expand(ui, this);
    diffHandler = new Diff(ui, this);
    queryHandler = new Query(ui, this);
    templateHandler = new Template(ui, this);
    exportHandler = new Export(ui, this);
    extractHandler = new Extract(ui, this);
    reasonHandler = new Reason(ui, this);
    removeHandler = new Remove(ui, this);
    filterHandler = new Filter(ui, this);
    materializeHandler = new Materialize(ui, this);
    renameHandler = new Rename(ui, this);
    reportHandler = new Report(ui, this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../Functions/Merge/merge.h"
#include "../Functions/Collapse/collapse.h"
#include "../Functions/Mirror/mirror.h"
#include "../Functions/Relax/relax.h"
#include "../Functions/Reduce/reduce.h"
#include "../Functions/Convert/convert.h"
#include "../Functions/Validate/validate.h"
#include "../Functions/Repair/repair.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
    Merge *mergeHandler;
    Collapse *collapseHandler;
    Mirror *mirrorHandler;
    Relax *relaxHandler;
    Reduce *reduceHandler;
    Convert *convertHandler;
    Validate *validateHandler;
    Repair *repairHandler;
};

#endif // MAINWINDOW_H







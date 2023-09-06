#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSplashScreen>
#include "../Functions/Merge/merge.h"
#include "../Functions/Collapse/collapse.h"
#include "../Functions/Mirror/mirror.h"
#include "../Functions/Relax/relax.h"
#include "../Functions/Reduce/reduce.h"
#include "../Functions/Convert/convert.h"
#include "../Functions/Validate/validate.h"
#include "../Functions/Repair/repair.h"
#include "../Functions/Unmerge/unmerge.h"
#include "../Functions/Measure/measure.h"
#include "../Functions/Expand/expand.h"
#include "../Functions/Diff/diff.h"
#include "../Functions/Query/query.h"
#include "../Functions/Template/template.h"
#include "../Functions/Export/export.h"
#include "../Functions/Extract/extract.h"
#include "../Functions/Reason/reason.h"
#include "../Functions/Extract/extract.h"
#include "../Functions/Remove/remove.h"
#include "../Functions/Filter/filter.h"
#include "../Functions/Materialize/materialize.h"
#include "../Functions/Rename/rename.h"
#include "../Functions/Report/report.h"

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
    QSplashScreen *splashScreen;
    Ui::MainWindow *ui;
    Merge *mergeHandler;
    Collapse *collapseHandler;
    Mirror *mirrorHandler;
    Relax *relaxHandler;
    Reduce *reduceHandler;
    Convert *convertHandler;
    Validate *validateHandler;
    Repair *repairHandler;
    Unmerge *unmergeHandler;
    Measure *measureHandler;
    Expand *expandHandler;
    Diff *diffHandler;
    Query *queryHandler;
    Template *templateHandler;
    Export *exportHandler;
    Extract *extractHandler;
    Reason *reasonHandler;
    Remove *removeHandler;
    Filter *filterHandler;
    Materialize *materializeHandler;
    Rename *renameHandler;
    Report *reportHandler;
};

#endif // MAINWINDOW_H







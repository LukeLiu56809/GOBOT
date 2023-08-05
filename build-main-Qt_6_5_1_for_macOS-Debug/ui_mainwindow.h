/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *mainHeader1;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *merge;
    QListWidget *mergeFileNames;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *mergeAddFile;
    QPushButton *mergeRemoveFile;
    QSplitter *splitter_3;
    QLabel *label_7;
    QComboBox *mergeOntologyAnnotations;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mergeSaveAs;
    QLineEdit *mergeNameSave;
    QLabel *label;
    QLineEdit *mergeSavePath;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *mergeReset;
    QPushButton *mergeButton;
    QSplitter *splitter_2;
    QLabel *label_6;
    QComboBox *mergeImportClosure;
    QWidget *collapse;
    QListWidget *collapseFileNames;
    QLabel *label_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *collapseAddFile;
    QPushButton *collapseRemoveFile;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *collapseSaveAs;
    QLineEdit *collapseNameSave;
    QLabel *label_2;
    QLineEdit *collapseSavePath;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *collapseReset;
    QPushButton *collapseButton;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *collapseThreshold;
    QSpinBox *collapseThresholdEdit;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *collapsePreciousClasses;
    QLineEdit *collapsePreciousClassesEdit;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *collapsePreciousTerms;
    QPushButton *collapsePreciousTermsFile;
    QLineEdit *collapsePreciousTermsEdit;
    QWidget *mirror;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mirrorAddFile;
    QPushButton *mirrorRemoveFile;
    QListWidget *mirrorFileNames;
    QWidget *widget8;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mirrorSaveAs;
    QLineEdit *mirrorNameSave;
    QLabel *label_4;
    QLineEdit *mirrorSavePath;
    QWidget *widget9;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mirrorReset;
    QPushButton *mirrorButton;
    QWidget *relax;
    QListWidget *relaxFileNames;
    QWidget *widget10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *relaxAddFile;
    QPushButton *relaxRemoveFile;
    QWidget *widget11;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *relaxSaveAs;
    QLineEdit *relaxNameSave;
    QLabel *label_5;
    QLineEdit *relaxSavePath;
    QWidget *widget12;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *relaxReset;
    QPushButton *relaxButton;
    QWidget *reduce;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *reduceSaveAs;
    QLineEdit *reduceNameSave;
    QLabel *label_8;
    QLineEdit *reduceSavePath;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *reduceReset;
    QPushButton *reduceButton;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *reduceAddFile;
    QPushButton *reduceRemoveFile;
    QListWidget *reduceFileNames;
    QCheckBox *reducePreserveAxioms;
    QCheckBox *reduceIgnoreClasses;
    QWidget *convert;
    QWidget *layoutWidget_24;
    QHBoxLayout *horizontalLayout_37;
    QPushButton *convertAddFile;
    QPushButton *convertRemoveFile;
    QCheckBox *convertCompress;
    QWidget *layoutWidget_25;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *convertSaveAs;
    QLineEdit *convertNameSave;
    QLabel *label_17;
    QLineEdit *convertSavePath;
    QListWidget *convertFileNames;
    QWidget *layoutWidget_26;
    QHBoxLayout *horizontalLayout_39;
    QPushButton *convertReset;
    QPushButton *convertButton;
    QCheckBox *convertIgnoreChecks;
    QWidget *widget13;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_18;
    QComboBox *convertFormat;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(684, 424);
        QFont font;
        font.setFamilies({QString::fromUtf8("Futura")});
        font.setPointSize(13);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        mainHeader1 = new QLabel(centralwidget);
        mainHeader1->setObjectName("mainHeader1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Futura")});
        font1.setPointSize(64);
        font1.setBold(true);
        mainHeader1->setFont(font1);

        verticalLayout_3->addWidget(mainHeader1);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Galvji")});
        font2.setPointSize(10);
        tabWidget->setFont(font2);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideRight);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        merge = new QWidget();
        merge->setObjectName("merge");
        mergeFileNames = new QListWidget(merge);
        mergeFileNames->setObjectName("mergeFileNames");
        mergeFileNames->setGeometry(QRect(10, 50, 211, 201));
        mergeFileNames->setFocusPolicy(Qt::ClickFocus);
        mergeFileNames->setFrameShape(QFrame::Box);
        mergeFileNames->setFrameShadow(QFrame::Plain);
        layoutWidget_2 = new QWidget(merge);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 10, 211, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mergeAddFile = new QPushButton(layoutWidget_2);
        mergeAddFile->setObjectName("mergeAddFile");
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mergeAddFile->sizePolicy().hasHeightForWidth());
        mergeAddFile->setSizePolicy(sizePolicy);
        mergeAddFile->setMinimumSize(QSize(100, 0));
        mergeAddFile->setMaximumSize(QSize(100, 16777215));
        mergeAddFile->setFocusPolicy(Qt::NoFocus);
        mergeAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        mergeAddFile->setFlat(false);

        horizontalLayout->addWidget(mergeAddFile);

        mergeRemoveFile = new QPushButton(layoutWidget_2);
        mergeRemoveFile->setObjectName("mergeRemoveFile");
        sizePolicy.setHeightForWidth(mergeRemoveFile->sizePolicy().hasHeightForWidth());
        mergeRemoveFile->setSizePolicy(sizePolicy);
        mergeRemoveFile->setMinimumSize(QSize(100, 0));
        mergeRemoveFile->setMaximumSize(QSize(100, 16777215));
        mergeRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(mergeRemoveFile);

        splitter_3 = new QSplitter(merge);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setGeometry(QRect(240, 80, 201, 32));
        splitter_3->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_3);
        label_7->setObjectName("label_7");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Galvji")});
        font3.setPointSize(10);
        font3.setBold(true);
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(label_7);
        mergeOntologyAnnotations = new QComboBox(splitter_3);
        mergeOntologyAnnotations->addItem(QString());
        mergeOntologyAnnotations->addItem(QString());
        mergeOntologyAnnotations->setObjectName("mergeOntologyAnnotations");
        mergeOntologyAnnotations->setFocusPolicy(Qt::NoFocus);
        mergeOntologyAnnotations->setEditable(false);
        splitter_3->addWidget(mergeOntologyAnnotations);
        widget = new QWidget(merge);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mergeSaveAs = new QPushButton(widget);
        mergeSaveAs->setObjectName("mergeSaveAs");
        mergeSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(mergeSaveAs);

        mergeNameSave = new QLineEdit(widget);
        mergeNameSave->setObjectName("mergeNameSave");
        mergeNameSave->setFocusPolicy(Qt::NoFocus);
        mergeNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mergeNameSave->setDragEnabled(false);
        mergeNameSave->setClearButtonEnabled(false);

        horizontalLayout_6->addWidget(mergeNameSave);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label);

        mergeSavePath = new QLineEdit(widget);
        mergeSavePath->setObjectName("mergeSavePath");
        mergeSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(mergeSavePath);

        widget1 = new QWidget(merge);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(240, 220, 157, 32));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        mergeReset = new QPushButton(widget1);
        mergeReset->setObjectName("mergeReset");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mergeReset->sizePolicy().hasHeightForWidth());
        mergeReset->setSizePolicy(sizePolicy1);
        mergeReset->setMaximumSize(QSize(150, 16777215));
        mergeReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(mergeReset);

        mergeButton = new QPushButton(widget1);
        mergeButton->setObjectName("mergeButton");
        sizePolicy1.setHeightForWidth(mergeButton->sizePolicy().hasHeightForWidth());
        mergeButton->setSizePolicy(sizePolicy1);
        mergeButton->setMinimumSize(QSize(0, 0));
        mergeButton->setMaximumSize(QSize(150, 16777215));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Galvji")});
        font4.setPointSize(10);
        font4.setKerning(true);
        mergeButton->setFont(font4);
        mergeButton->setFocusPolicy(Qt::NoFocus);
        mergeButton->setAutoFillBackground(false);
        mergeButton->setCheckable(false);
        mergeButton->setChecked(false);
        mergeButton->setAutoExclusive(false);
        mergeButton->setAutoDefault(false);
        mergeButton->setFlat(false);

        horizontalLayout_7->addWidget(mergeButton);

        splitter_2 = new QSplitter(merge);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(240, 50, 161, 32));
        splitter_2->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(label_6);
        mergeImportClosure = new QComboBox(splitter_2);
        mergeImportClosure->addItem(QString());
        mergeImportClosure->addItem(QString());
        mergeImportClosure->setObjectName("mergeImportClosure");
        mergeImportClosure->setFocusPolicy(Qt::NoFocus);
        mergeImportClosure->setEditable(false);
        splitter_2->addWidget(mergeImportClosure);
        tabWidget->addTab(merge, QString());
        collapse = new QWidget();
        collapse->setObjectName("collapse");
        collapseFileNames = new QListWidget(collapse);
        collapseFileNames->setObjectName("collapseFileNames");
        collapseFileNames->setGeometry(QRect(10, 50, 211, 201));
        collapseFileNames->setFocusPolicy(Qt::ClickFocus);
        collapseFileNames->setFrameShape(QFrame::Box);
        collapseFileNames->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(collapse);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 50, 58, 31));
        label_3->setFont(font3);
        widget2 = new QWidget(collapse);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_8 = new QHBoxLayout(widget2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        collapseAddFile = new QPushButton(widget2);
        collapseAddFile->setObjectName("collapseAddFile");
        sizePolicy.setHeightForWidth(collapseAddFile->sizePolicy().hasHeightForWidth());
        collapseAddFile->setSizePolicy(sizePolicy);
        collapseAddFile->setMinimumSize(QSize(100, 0));
        collapseAddFile->setFocusPolicy(Qt::NoFocus);
        collapseAddFile->setFlat(false);

        horizontalLayout_8->addWidget(collapseAddFile);

        collapseRemoveFile = new QPushButton(widget2);
        collapseRemoveFile->setObjectName("collapseRemoveFile");
        sizePolicy.setHeightForWidth(collapseRemoveFile->sizePolicy().hasHeightForWidth());
        collapseRemoveFile->setSizePolicy(sizePolicy);
        collapseRemoveFile->setMinimumSize(QSize(100, 0));
        collapseRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(collapseRemoveFile);

        widget3 = new QWidget(collapse);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_9 = new QHBoxLayout(widget3);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        collapseSaveAs = new QPushButton(widget3);
        collapseSaveAs->setObjectName("collapseSaveAs");
        collapseSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_9->addWidget(collapseSaveAs);

        collapseNameSave = new QLineEdit(widget3);
        collapseNameSave->setObjectName("collapseNameSave");
        collapseNameSave->setFocusPolicy(Qt::NoFocus);
        collapseNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        collapseNameSave->setDragEnabled(false);
        collapseNameSave->setClearButtonEnabled(false);

        horizontalLayout_9->addWidget(collapseNameSave);

        label_2 = new QLabel(widget3);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_2);

        collapseSavePath = new QLineEdit(widget3);
        collapseSavePath->setObjectName("collapseSavePath");
        collapseSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_9->addWidget(collapseSavePath);

        widget4 = new QWidget(collapse);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(240, 220, 163, 32));
        horizontalLayout_10 = new QHBoxLayout(widget4);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        collapseReset = new QPushButton(widget4);
        collapseReset->setObjectName("collapseReset");
        sizePolicy1.setHeightForWidth(collapseReset->sizePolicy().hasHeightForWidth());
        collapseReset->setSizePolicy(sizePolicy1);
        collapseReset->setMaximumSize(QSize(150, 16777215));
        collapseReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_10->addWidget(collapseReset);

        collapseButton = new QPushButton(widget4);
        collapseButton->setObjectName("collapseButton");
        sizePolicy1.setHeightForWidth(collapseButton->sizePolicy().hasHeightForWidth());
        collapseButton->setSizePolicy(sizePolicy1);
        collapseButton->setMinimumSize(QSize(0, 0));
        collapseButton->setMaximumSize(QSize(150, 16777215));
        collapseButton->setFocusPolicy(Qt::NoFocus);
        collapseButton->setAutoFillBackground(false);
        collapseButton->setAutoDefault(false);
        collapseButton->setFlat(false);

        horizontalLayout_10->addWidget(collapseButton);

        widget5 = new QWidget(collapse);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(240, 130, 121, 28));
        horizontalLayout_11 = new QHBoxLayout(widget5);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        collapseThreshold = new QCheckBox(widget5);
        collapseThreshold->setObjectName("collapseThreshold");
        collapseThreshold->setFont(font3);
        collapseThreshold->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_11->addWidget(collapseThreshold);

        collapseThresholdEdit = new QSpinBox(widget5);
        collapseThresholdEdit->setObjectName("collapseThresholdEdit");
        collapseThresholdEdit->setFocusPolicy(Qt::NoFocus);
        collapseThresholdEdit->setMinimum(2);

        horizontalLayout_11->addWidget(collapseThresholdEdit);

        widget6 = new QWidget(collapse);
        widget6->setObjectName("widget6");
        widget6->setGeometry(QRect(260, 70, 234, 31));
        horizontalLayout_12 = new QHBoxLayout(widget6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        collapsePreciousClasses = new QCheckBox(widget6);
        collapsePreciousClasses->setObjectName("collapsePreciousClasses");
        collapsePreciousClasses->setFocusPolicy(Qt::ClickFocus);
        collapsePreciousClasses->setCheckable(true);
        collapsePreciousClasses->setChecked(false);
        collapsePreciousClasses->setAutoRepeat(false);
        collapsePreciousClasses->setAutoExclusive(false);
        collapsePreciousClasses->setTristate(false);

        horizontalLayout_12->addWidget(collapsePreciousClasses);

        collapsePreciousClassesEdit = new QLineEdit(widget6);
        collapsePreciousClassesEdit->setObjectName("collapsePreciousClassesEdit");
        collapsePreciousClassesEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_12->addWidget(collapsePreciousClassesEdit);

        widget7 = new QWidget(collapse);
        widget7->setObjectName("widget7");
        widget7->setGeometry(QRect(260, 100, 328, 33));
        horizontalLayout_13 = new QHBoxLayout(widget7);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        collapsePreciousTerms = new QCheckBox(widget7);
        collapsePreciousTerms->setObjectName("collapsePreciousTerms");
        collapsePreciousTerms->setFocusPolicy(Qt::ClickFocus);
        collapsePreciousTerms->setChecked(false);
        collapsePreciousTerms->setTristate(false);

        horizontalLayout_13->addWidget(collapsePreciousTerms);

        collapsePreciousTermsFile = new QPushButton(widget7);
        collapsePreciousTermsFile->setObjectName("collapsePreciousTermsFile");

        horizontalLayout_13->addWidget(collapsePreciousTermsFile);

        collapsePreciousTermsEdit = new QLineEdit(widget7);
        collapsePreciousTermsEdit->setObjectName("collapsePreciousTermsEdit");
        collapsePreciousTermsEdit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_13->addWidget(collapsePreciousTermsEdit);

        tabWidget->addTab(collapse, QString());
        mirror = new QWidget();
        mirror->setObjectName("mirror");
        layoutWidget_3 = new QWidget(mirror);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mirrorAddFile = new QPushButton(layoutWidget_3);
        mirrorAddFile->setObjectName("mirrorAddFile");
        sizePolicy.setHeightForWidth(mirrorAddFile->sizePolicy().hasHeightForWidth());
        mirrorAddFile->setSizePolicy(sizePolicy);
        mirrorAddFile->setMinimumSize(QSize(100, 0));
        mirrorAddFile->setMaximumSize(QSize(100, 16777215));
        mirrorAddFile->setFocusPolicy(Qt::NoFocus);
        mirrorAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        mirrorAddFile->setFlat(false);

        horizontalLayout_2->addWidget(mirrorAddFile);

        mirrorRemoveFile = new QPushButton(layoutWidget_3);
        mirrorRemoveFile->setObjectName("mirrorRemoveFile");
        sizePolicy.setHeightForWidth(mirrorRemoveFile->sizePolicy().hasHeightForWidth());
        mirrorRemoveFile->setSizePolicy(sizePolicy);
        mirrorRemoveFile->setMinimumSize(QSize(100, 0));
        mirrorRemoveFile->setMaximumSize(QSize(100, 16777215));
        mirrorRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(mirrorRemoveFile);

        mirrorFileNames = new QListWidget(mirror);
        mirrorFileNames->setObjectName("mirrorFileNames");
        mirrorFileNames->setGeometry(QRect(10, 50, 211, 201));
        mirrorFileNames->setFocusPolicy(Qt::ClickFocus);
        mirrorFileNames->setFrameShape(QFrame::Box);
        mirrorFileNames->setFrameShadow(QFrame::Plain);
        widget8 = new QWidget(mirror);
        widget8->setObjectName("widget8");
        widget8->setGeometry(QRect(240, 50, 401, 33));
        horizontalLayout_4 = new QHBoxLayout(widget8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mirrorSaveAs = new QPushButton(widget8);
        mirrorSaveAs->setObjectName("mirrorSaveAs");
        mirrorSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(mirrorSaveAs);

        mirrorNameSave = new QLineEdit(widget8);
        mirrorNameSave->setObjectName("mirrorNameSave");
        mirrorNameSave->setFocusPolicy(Qt::NoFocus);
        mirrorNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mirrorNameSave->setDragEnabled(false);
        mirrorNameSave->setClearButtonEnabled(false);

        horizontalLayout_4->addWidget(mirrorNameSave);

        label_4 = new QLabel(widget8);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        mirrorSavePath = new QLineEdit(widget8);
        mirrorSavePath->setObjectName("mirrorSavePath");
        mirrorSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(mirrorSavePath);

        widget9 = new QWidget(mirror);
        widget9->setObjectName("widget9");
        widget9->setGeometry(QRect(240, 80, 151, 32));
        horizontalLayout_5 = new QHBoxLayout(widget9);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mirrorReset = new QPushButton(widget9);
        mirrorReset->setObjectName("mirrorReset");
        sizePolicy1.setHeightForWidth(mirrorReset->sizePolicy().hasHeightForWidth());
        mirrorReset->setSizePolicy(sizePolicy1);
        mirrorReset->setMaximumSize(QSize(150, 16777215));
        mirrorReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(mirrorReset);

        mirrorButton = new QPushButton(widget9);
        mirrorButton->setObjectName("mirrorButton");
        sizePolicy1.setHeightForWidth(mirrorButton->sizePolicy().hasHeightForWidth());
        mirrorButton->setSizePolicy(sizePolicy1);
        mirrorButton->setMinimumSize(QSize(0, 0));
        mirrorButton->setMaximumSize(QSize(150, 16777215));
        mirrorButton->setFocusPolicy(Qt::NoFocus);
        mirrorButton->setAutoFillBackground(false);
        mirrorButton->setAutoDefault(false);
        mirrorButton->setFlat(false);

        horizontalLayout_5->addWidget(mirrorButton);

        tabWidget->addTab(mirror, QString());
        relax = new QWidget();
        relax->setObjectName("relax");
        relaxFileNames = new QListWidget(relax);
        relaxFileNames->setObjectName("relaxFileNames");
        relaxFileNames->setGeometry(QRect(10, 50, 211, 201));
        relaxFileNames->setFocusPolicy(Qt::ClickFocus);
        relaxFileNames->setFrameShape(QFrame::Box);
        relaxFileNames->setFrameShadow(QFrame::Plain);
        widget10 = new QWidget(relax);
        widget10->setObjectName("widget10");
        widget10->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_3 = new QHBoxLayout(widget10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        relaxAddFile = new QPushButton(widget10);
        relaxAddFile->setObjectName("relaxAddFile");
        sizePolicy.setHeightForWidth(relaxAddFile->sizePolicy().hasHeightForWidth());
        relaxAddFile->setSizePolicy(sizePolicy);
        relaxAddFile->setMinimumSize(QSize(100, 0));
        relaxAddFile->setMaximumSize(QSize(100, 16777215));
        relaxAddFile->setFocusPolicy(Qt::NoFocus);
        relaxAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        relaxAddFile->setFlat(false);

        horizontalLayout_3->addWidget(relaxAddFile);

        relaxRemoveFile = new QPushButton(widget10);
        relaxRemoveFile->setObjectName("relaxRemoveFile");
        sizePolicy.setHeightForWidth(relaxRemoveFile->sizePolicy().hasHeightForWidth());
        relaxRemoveFile->setSizePolicy(sizePolicy);
        relaxRemoveFile->setMinimumSize(QSize(100, 0));
        relaxRemoveFile->setMaximumSize(QSize(100, 16777215));
        relaxRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(relaxRemoveFile);

        widget11 = new QWidget(relax);
        widget11->setObjectName("widget11");
        widget11->setGeometry(QRect(240, 50, 401, 33));
        horizontalLayout_14 = new QHBoxLayout(widget11);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        relaxSaveAs = new QPushButton(widget11);
        relaxSaveAs->setObjectName("relaxSaveAs");
        relaxSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(relaxSaveAs);

        relaxNameSave = new QLineEdit(widget11);
        relaxNameSave->setObjectName("relaxNameSave");
        relaxNameSave->setFocusPolicy(Qt::NoFocus);
        relaxNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        relaxNameSave->setDragEnabled(false);
        relaxNameSave->setClearButtonEnabled(false);

        horizontalLayout_14->addWidget(relaxNameSave);

        label_5 = new QLabel(widget11);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_5);

        relaxSavePath = new QLineEdit(widget11);
        relaxSavePath->setObjectName("relaxSavePath");
        relaxSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(relaxSavePath);

        widget12 = new QWidget(relax);
        widget12->setObjectName("widget12");
        widget12->setGeometry(QRect(240, 80, 147, 32));
        horizontalLayout_15 = new QHBoxLayout(widget12);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        relaxReset = new QPushButton(widget12);
        relaxReset->setObjectName("relaxReset");
        sizePolicy1.setHeightForWidth(relaxReset->sizePolicy().hasHeightForWidth());
        relaxReset->setSizePolicy(sizePolicy1);
        relaxReset->setMaximumSize(QSize(150, 16777215));
        relaxReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(relaxReset);

        relaxButton = new QPushButton(widget12);
        relaxButton->setObjectName("relaxButton");
        sizePolicy1.setHeightForWidth(relaxButton->sizePolicy().hasHeightForWidth());
        relaxButton->setSizePolicy(sizePolicy1);
        relaxButton->setMinimumSize(QSize(0, 0));
        relaxButton->setMaximumSize(QSize(150, 16777215));
        relaxButton->setFocusPolicy(Qt::NoFocus);
        relaxButton->setAutoFillBackground(false);
        relaxButton->setAutoDefault(false);
        relaxButton->setFlat(false);

        horizontalLayout_15->addWidget(relaxButton);

        tabWidget->addTab(relax, QString());
        reduce = new QWidget();
        reduce->setObjectName("reduce");
        layoutWidget = new QWidget(reduce);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        reduceSaveAs = new QPushButton(layoutWidget);
        reduceSaveAs->setObjectName("reduceSaveAs");
        reduceSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(reduceSaveAs);

        reduceNameSave = new QLineEdit(layoutWidget);
        reduceNameSave->setObjectName("reduceNameSave");
        reduceNameSave->setFocusPolicy(Qt::NoFocus);
        reduceNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        reduceNameSave->setDragEnabled(false);
        reduceNameSave->setClearButtonEnabled(false);

        horizontalLayout_16->addWidget(reduceNameSave);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_8);

        reduceSavePath = new QLineEdit(layoutWidget);
        reduceSavePath->setObjectName("reduceSavePath");
        reduceSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(reduceSavePath);

        layoutWidget_4 = new QWidget(reduce);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(240, 220, 157, 32));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        reduceReset = new QPushButton(layoutWidget_4);
        reduceReset->setObjectName("reduceReset");
        sizePolicy1.setHeightForWidth(reduceReset->sizePolicy().hasHeightForWidth());
        reduceReset->setSizePolicy(sizePolicy1);
        reduceReset->setMaximumSize(QSize(150, 16777215));
        reduceReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_17->addWidget(reduceReset);

        reduceButton = new QPushButton(layoutWidget_4);
        reduceButton->setObjectName("reduceButton");
        sizePolicy1.setHeightForWidth(reduceButton->sizePolicy().hasHeightForWidth());
        reduceButton->setSizePolicy(sizePolicy1);
        reduceButton->setMinimumSize(QSize(0, 0));
        reduceButton->setMaximumSize(QSize(150, 16777215));
        reduceButton->setFocusPolicy(Qt::NoFocus);
        reduceButton->setAutoFillBackground(false);
        reduceButton->setAutoDefault(false);
        reduceButton->setFlat(false);

        horizontalLayout_17->addWidget(reduceButton);

        layoutWidget_5 = new QWidget(reduce);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        reduceAddFile = new QPushButton(layoutWidget_5);
        reduceAddFile->setObjectName("reduceAddFile");
        sizePolicy.setHeightForWidth(reduceAddFile->sizePolicy().hasHeightForWidth());
        reduceAddFile->setSizePolicy(sizePolicy);
        reduceAddFile->setMinimumSize(QSize(100, 0));
        reduceAddFile->setMaximumSize(QSize(100, 16777215));
        reduceAddFile->setFocusPolicy(Qt::NoFocus);
        reduceAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        reduceAddFile->setFlat(false);

        horizontalLayout_18->addWidget(reduceAddFile);

        reduceRemoveFile = new QPushButton(layoutWidget_5);
        reduceRemoveFile->setObjectName("reduceRemoveFile");
        sizePolicy.setHeightForWidth(reduceRemoveFile->sizePolicy().hasHeightForWidth());
        reduceRemoveFile->setSizePolicy(sizePolicy);
        reduceRemoveFile->setMinimumSize(QSize(100, 0));
        reduceRemoveFile->setMaximumSize(QSize(100, 16777215));
        reduceRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_18->addWidget(reduceRemoveFile);

        reduceFileNames = new QListWidget(reduce);
        reduceFileNames->setObjectName("reduceFileNames");
        reduceFileNames->setGeometry(QRect(10, 50, 211, 201));
        reduceFileNames->setFocusPolicy(Qt::ClickFocus);
        reduceFileNames->setFrameShape(QFrame::Box);
        reduceFileNames->setFrameShadow(QFrame::Plain);
        reducePreserveAxioms = new QCheckBox(reduce);
        reducePreserveAxioms->setObjectName("reducePreserveAxioms");
        reducePreserveAxioms->setGeometry(QRect(240, 50, 161, 31));
        reducePreserveAxioms->setFont(font3);
        reduceIgnoreClasses = new QCheckBox(reduce);
        reduceIgnoreClasses->setObjectName("reduceIgnoreClasses");
        reduceIgnoreClasses->setGeometry(QRect(240, 80, 161, 31));
        reduceIgnoreClasses->setFont(font3);
        tabWidget->addTab(reduce, QString());
        convert = new QWidget();
        convert->setObjectName("convert");
        layoutWidget_24 = new QWidget(convert);
        layoutWidget_24->setObjectName("layoutWidget_24");
        layoutWidget_24->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_37 = new QHBoxLayout(layoutWidget_24);
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        horizontalLayout_37->setContentsMargins(0, 0, 0, 0);
        convertAddFile = new QPushButton(layoutWidget_24);
        convertAddFile->setObjectName("convertAddFile");
        sizePolicy.setHeightForWidth(convertAddFile->sizePolicy().hasHeightForWidth());
        convertAddFile->setSizePolicy(sizePolicy);
        convertAddFile->setMinimumSize(QSize(100, 0));
        convertAddFile->setMaximumSize(QSize(100, 16777215));
        convertAddFile->setFocusPolicy(Qt::NoFocus);
        convertAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        convertAddFile->setFlat(false);

        horizontalLayout_37->addWidget(convertAddFile);

        convertRemoveFile = new QPushButton(layoutWidget_24);
        convertRemoveFile->setObjectName("convertRemoveFile");
        sizePolicy.setHeightForWidth(convertRemoveFile->sizePolicy().hasHeightForWidth());
        convertRemoveFile->setSizePolicy(sizePolicy);
        convertRemoveFile->setMinimumSize(QSize(100, 0));
        convertRemoveFile->setMaximumSize(QSize(100, 16777215));
        convertRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_37->addWidget(convertRemoveFile);

        convertCompress = new QCheckBox(convert);
        convertCompress->setObjectName("convertCompress");
        convertCompress->setGeometry(QRect(240, 80, 161, 31));
        convertCompress->setFont(font3);
        layoutWidget_25 = new QWidget(convert);
        layoutWidget_25->setObjectName("layoutWidget_25");
        layoutWidget_25->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_38 = new QHBoxLayout(layoutWidget_25);
        horizontalLayout_38->setObjectName("horizontalLayout_38");
        horizontalLayout_38->setContentsMargins(0, 0, 0, 0);
        convertSaveAs = new QPushButton(layoutWidget_25);
        convertSaveAs->setObjectName("convertSaveAs");
        convertSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_38->addWidget(convertSaveAs);

        convertNameSave = new QLineEdit(layoutWidget_25);
        convertNameSave->setObjectName("convertNameSave");
        convertNameSave->setFocusPolicy(Qt::NoFocus);
        convertNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        convertNameSave->setDragEnabled(false);
        convertNameSave->setClearButtonEnabled(false);

        horizontalLayout_38->addWidget(convertNameSave);

        label_17 = new QLabel(layoutWidget_25);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_38->addWidget(label_17);

        convertSavePath = new QLineEdit(layoutWidget_25);
        convertSavePath->setObjectName("convertSavePath");
        convertSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_38->addWidget(convertSavePath);

        convertFileNames = new QListWidget(convert);
        convertFileNames->setObjectName("convertFileNames");
        convertFileNames->setGeometry(QRect(10, 50, 211, 201));
        convertFileNames->setFocusPolicy(Qt::ClickFocus);
        convertFileNames->setFrameShape(QFrame::Box);
        convertFileNames->setFrameShadow(QFrame::Plain);
        layoutWidget_26 = new QWidget(convert);
        layoutWidget_26->setObjectName("layoutWidget_26");
        layoutWidget_26->setGeometry(QRect(240, 220, 157, 32));
        horizontalLayout_39 = new QHBoxLayout(layoutWidget_26);
        horizontalLayout_39->setObjectName("horizontalLayout_39");
        horizontalLayout_39->setContentsMargins(0, 0, 0, 0);
        convertReset = new QPushButton(layoutWidget_26);
        convertReset->setObjectName("convertReset");
        sizePolicy1.setHeightForWidth(convertReset->sizePolicy().hasHeightForWidth());
        convertReset->setSizePolicy(sizePolicy1);
        convertReset->setMaximumSize(QSize(150, 16777215));
        convertReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_39->addWidget(convertReset);

        convertButton = new QPushButton(layoutWidget_26);
        convertButton->setObjectName("convertButton");
        sizePolicy1.setHeightForWidth(convertButton->sizePolicy().hasHeightForWidth());
        convertButton->setSizePolicy(sizePolicy1);
        convertButton->setMinimumSize(QSize(0, 0));
        convertButton->setMaximumSize(QSize(150, 16777215));
        convertButton->setFocusPolicy(Qt::NoFocus);
        convertButton->setAutoFillBackground(false);
        convertButton->setAutoDefault(false);
        convertButton->setFlat(false);

        horizontalLayout_39->addWidget(convertButton);

        convertIgnoreChecks = new QCheckBox(convert);
        convertIgnoreChecks->setObjectName("convertIgnoreChecks");
        convertIgnoreChecks->setGeometry(QRect(240, 110, 161, 31));
        convertIgnoreChecks->setFont(font3);
        widget13 = new QWidget(convert);
        widget13->setObjectName("widget13");
        widget13->setGeometry(QRect(240, 50, 111, 32));
        horizontalLayout_40 = new QHBoxLayout(widget13);
        horizontalLayout_40->setObjectName("horizontalLayout_40");
        horizontalLayout_40->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(widget13);
        label_18->setObjectName("label_18");
        label_18->setFont(font3);

        horizontalLayout_40->addWidget(label_18);

        convertFormat = new QComboBox(widget13);
        convertFormat->addItem(QString());
        convertFormat->addItem(QString());
        convertFormat->addItem(QString());
        convertFormat->addItem(QString());
        convertFormat->addItem(QString());
        convertFormat->addItem(QString());
        convertFormat->addItem(QString());
        convertFormat->setObjectName("convertFormat");

        horizontalLayout_40->addWidget(convertFormat);

        tabWidget->addTab(convert, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        mergeAddFile->setDefault(false);
        mergeButton->setDefault(true);
        collapseAddFile->setDefault(false);
        collapseButton->setDefault(true);
        mirrorAddFile->setDefault(false);
        mirrorButton->setDefault(true);
        relaxAddFile->setDefault(false);
        relaxButton->setDefault(true);
        reduceButton->setDefault(true);
        reduceAddFile->setDefault(false);
        convertAddFile->setDefault(false);
        convertButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mainHeader1->setText(QCoreApplication::translate("MainWindow", "ROBOT ", nullptr));
        mergeAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        mergeRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ontology Annotations", nullptr));
        mergeOntologyAnnotations->setItemText(0, QCoreApplication::translate("MainWindow", "False", nullptr));
        mergeOntologyAnnotations->setItemText(1, QCoreApplication::translate("MainWindow", "True", nullptr));

        mergeOntologyAnnotations->setCurrentText(QCoreApplication::translate("MainWindow", "False", nullptr));
        mergeSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        mergeNameSave->setText(QString());
        mergeNameSave->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        mergeReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        mergeButton->setText(QCoreApplication::translate("MainWindow", "Merge Files", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", " Import Closure", nullptr));
        mergeImportClosure->setItemText(0, QCoreApplication::translate("MainWindow", "True", nullptr));
        mergeImportClosure->setItemText(1, QCoreApplication::translate("MainWindow", "False", nullptr));

        mergeImportClosure->setCurrentText(QCoreApplication::translate("MainWindow", "True", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(merge), QCoreApplication::translate("MainWindow", "Merge", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Precious", nullptr));
        collapseAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        collapseRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        collapseSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        collapseNameSave->setText(QString());
        collapseNameSave->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        collapseReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        collapseButton->setText(QCoreApplication::translate("MainWindow", "Collapse File", nullptr));
        collapseThreshold->setText(QCoreApplication::translate("MainWindow", "Threshold", nullptr));
        collapsePreciousClasses->setText(QCoreApplication::translate("MainWindow", "Classes <IRI/CURIE>", nullptr));
        collapsePreciousTerms->setText(QCoreApplication::translate("MainWindow", "Terms <term file>", nullptr));
        collapsePreciousTermsFile->setText(QCoreApplication::translate("MainWindow", "Select File", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(collapse), QCoreApplication::translate("MainWindow", "Collapse", nullptr));
        mirrorAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        mirrorRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        mirrorSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        mirrorNameSave->setText(QString());
        mirrorNameSave->setPlaceholderText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        mirrorReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        mirrorButton->setText(QCoreApplication::translate("MainWindow", "Mirror File", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mirror), QCoreApplication::translate("MainWindow", "Mirror", nullptr));
        relaxAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        relaxRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        relaxSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        relaxNameSave->setText(QString());
        relaxNameSave->setPlaceholderText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        relaxReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        relaxButton->setText(QCoreApplication::translate("MainWindow", "Relax File", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(relax), QCoreApplication::translate("MainWindow", "Relax", nullptr));
        reduceSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        reduceNameSave->setText(QString());
        reduceNameSave->setPlaceholderText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        reduceReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        reduceButton->setText(QCoreApplication::translate("MainWindow", "Reduce File", nullptr));
        reduceAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        reduceRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        reducePreserveAxioms->setText(QCoreApplication::translate("MainWindow", "Preserve Annotated Axioms", nullptr));
        reduceIgnoreClasses->setText(QCoreApplication::translate("MainWindow", "Ignore Anonymous Classes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(reduce), QCoreApplication::translate("MainWindow", "Reduce", nullptr));
        convertAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        convertRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        convertCompress->setText(QCoreApplication::translate("MainWindow", "Compress File (.gz)", nullptr));
        convertSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        convertNameSave->setText(QString());
        convertNameSave->setPlaceholderText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        convertReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        convertButton->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        convertIgnoreChecks->setText(QCoreApplication::translate("MainWindow", "Ignore checks", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Format", nullptr));
        convertFormat->setItemText(0, QCoreApplication::translate("MainWindow", "json", nullptr));
        convertFormat->setItemText(1, QCoreApplication::translate("MainWindow", "obo", nullptr));
        convertFormat->setItemText(2, QCoreApplication::translate("MainWindow", "ofn", nullptr));
        convertFormat->setItemText(3, QCoreApplication::translate("MainWindow", "omn", nullptr));
        convertFormat->setItemText(4, QCoreApplication::translate("MainWindow", "owl", nullptr));
        convertFormat->setItemText(5, QCoreApplication::translate("MainWindow", "owx", nullptr));
        convertFormat->setItemText(6, QCoreApplication::translate("MainWindow", "ttl", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(convert), QCoreApplication::translate("MainWindow", "Convert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QPushButton *collapseSaveAs;
    QLabel *label_3;
    QLineEdit *collapseThreshold;
    QListWidget *collapseFileNames;
    QPushButton *collapseAddFile;
    QPushButton *collapseRemoveFile;
    QLineEdit *collapseNameSave;
    QLabel *label_2;
    QLineEdit *collapseSavePath;
    QPushButton *collapseReset;
    QPushButton *collapseButton;
    QWidget *mirror;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mirrorAddFile;
    QPushButton *mirrorRemoveFile;
    QListWidget *mirrorFileNames;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mirrorSaveAs;
    QLineEdit *mirrorNameSave;
    QLabel *label_4;
    QLineEdit *mirrorSavePath;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mirrorReset;
    QPushButton *mirrorButton;
    QWidget *relax;
    QLabel *label_5;
    QPushButton *relaxReset;
    QLineEdit *relaxSavePath;
    QPushButton *relaxSaveAs;
    QLineEdit *relaxNameSave;
    QPushButton *relaxButton;
    QSplitter *splitter;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *relaxAddFile;
    QPushButton *relaxRemoveFile;
    QListWidget *relaxFileNames;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(690, 383);
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
        mergeFileNames->setGeometry(QRect(10, 50, 211, 153));
        mergeFileNames->setFocusPolicy(Qt::ClickFocus);
        mergeFileNames->setFrameShape(QFrame::Box);
        mergeFileNames->setFrameShadow(QFrame::Plain);
        layoutWidget_2 = new QWidget(merge);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 10, 212, 34));
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
        widget->setGeometry(QRect(240, 140, 401, 33));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mergeSaveAs = new QPushButton(widget);
        mergeSaveAs->setObjectName("mergeSaveAs");
        mergeSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(mergeSaveAs);

        mergeNameSave = new QLineEdit(widget);
        mergeNameSave->setObjectName("mergeNameSave");
        mergeNameSave->setFocusPolicy(Qt::ClickFocus);
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
        widget1->setGeometry(QRect(240, 170, 157, 32));
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
        collapseSaveAs = new QPushButton(collapse);
        collapseSaveAs->setObjectName("collapseSaveAs");
        collapseSaveAs->setGeometry(QRect(291, 90, 78, 33));
        collapseSaveAs->setFocusPolicy(Qt::NoFocus);
        label_3 = new QLabel(collapse);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(291, 61, 68, 17));
        collapseThreshold = new QLineEdit(collapse);
        collapseThreshold->setObjectName("collapseThreshold");
        collapseThreshold->setGeometry(QRect(366, 61, 46, 21));
        collapseThreshold->setMaximumSize(QSize(50, 16777215));
        collapseThreshold->setFocusPolicy(Qt::ClickFocus);
        collapseFileNames = new QListWidget(collapse);
        collapseFileNames->setObjectName("collapseFileNames");
        collapseFileNames->setGeometry(QRect(21, 54, 256, 192));
        collapseFileNames->setFocusPolicy(Qt::ClickFocus);
        collapseAddFile = new QPushButton(collapse);
        collapseAddFile->setObjectName("collapseAddFile");
        collapseAddFile->setGeometry(QRect(21, 11, 100, 33));
        sizePolicy.setHeightForWidth(collapseAddFile->sizePolicy().hasHeightForWidth());
        collapseAddFile->setSizePolicy(sizePolicy);
        collapseAddFile->setMinimumSize(QSize(100, 0));
        collapseAddFile->setFocusPolicy(Qt::NoFocus);
        collapseAddFile->setFlat(false);
        collapseRemoveFile = new QPushButton(collapse);
        collapseRemoveFile->setObjectName("collapseRemoveFile");
        collapseRemoveFile->setGeometry(QRect(120, 11, 100, 33));
        sizePolicy.setHeightForWidth(collapseRemoveFile->sizePolicy().hasHeightForWidth());
        collapseRemoveFile->setSizePolicy(sizePolicy);
        collapseRemoveFile->setMinimumSize(QSize(100, 0));
        collapseRemoveFile->setFocusPolicy(Qt::NoFocus);
        collapseNameSave = new QLineEdit(collapse);
        collapseNameSave->setObjectName("collapseNameSave");
        collapseNameSave->setGeometry(QRect(292, 130, 125, 21));
        collapseNameSave->setFocusPolicy(Qt::NoFocus);
        collapseNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        collapseNameSave->setDragEnabled(false);
        collapseNameSave->setClearButtonEnabled(false);
        label_2 = new QLabel(collapse);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(427, 130, 18, 17));
        label_2->setAlignment(Qt::AlignCenter);
        collapseSavePath = new QLineEdit(collapse);
        collapseSavePath->setObjectName("collapseSavePath");
        collapseSavePath->setGeometry(QRect(453, 130, 125, 21));
        collapseSavePath->setFocusPolicy(Qt::NoFocus);
        collapseReset = new QPushButton(collapse);
        collapseReset->setObjectName("collapseReset");
        collapseReset->setGeometry(QRect(291, 160, 61, 33));
        sizePolicy1.setHeightForWidth(collapseReset->sizePolicy().hasHeightForWidth());
        collapseReset->setSizePolicy(sizePolicy1);
        collapseReset->setMaximumSize(QSize(150, 16777215));
        collapseReset->setFocusPolicy(Qt::NoFocus);
        collapseButton = new QPushButton(collapse);
        collapseButton->setObjectName("collapseButton");
        collapseButton->setGeometry(QRect(374, 160, 106, 33));
        sizePolicy1.setHeightForWidth(collapseButton->sizePolicy().hasHeightForWidth());
        collapseButton->setSizePolicy(sizePolicy1);
        collapseButton->setMinimumSize(QSize(0, 0));
        collapseButton->setMaximumSize(QSize(150, 16777215));
        collapseButton->setFocusPolicy(Qt::NoFocus);
        collapseButton->setAutoFillBackground(false);
        collapseButton->setAutoDefault(false);
        collapseButton->setFlat(false);
        tabWidget->addTab(collapse, QString());
        mirror = new QWidget();
        mirror->setObjectName("mirror");
        layoutWidget_3 = new QWidget(mirror);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 10, 212, 34));
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
        mirrorFileNames->setGeometry(QRect(20, 50, 211, 153));
        mirrorFileNames->setFocusPolicy(Qt::ClickFocus);
        mirrorFileNames->setFrameShape(QFrame::Box);
        mirrorFileNames->setFrameShadow(QFrame::Plain);
        widget2 = new QWidget(mirror);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(250, 50, 401, 33));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mirrorSaveAs = new QPushButton(widget2);
        mirrorSaveAs->setObjectName("mirrorSaveAs");
        mirrorSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(mirrorSaveAs);

        mirrorNameSave = new QLineEdit(widget2);
        mirrorNameSave->setObjectName("mirrorNameSave");
        mirrorNameSave->setFocusPolicy(Qt::NoFocus);
        mirrorNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mirrorNameSave->setDragEnabled(false);
        mirrorNameSave->setClearButtonEnabled(false);

        horizontalLayout_4->addWidget(mirrorNameSave);

        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        mirrorSavePath = new QLineEdit(widget2);
        mirrorSavePath->setObjectName("mirrorSavePath");
        mirrorSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(mirrorSavePath);

        widget3 = new QWidget(mirror);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(250, 90, 151, 32));
        horizontalLayout_5 = new QHBoxLayout(widget3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mirrorReset = new QPushButton(widget3);
        mirrorReset->setObjectName("mirrorReset");
        sizePolicy1.setHeightForWidth(mirrorReset->sizePolicy().hasHeightForWidth());
        mirrorReset->setSizePolicy(sizePolicy1);
        mirrorReset->setMaximumSize(QSize(150, 16777215));
        mirrorReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(mirrorReset);

        mirrorButton = new QPushButton(widget3);
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
        label_5 = new QLabel(relax);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(377, 90, 18, 17));
        label_5->setAlignment(Qt::AlignCenter);
        relaxReset = new QPushButton(relax);
        relaxReset->setObjectName("relaxReset");
        relaxReset->setGeometry(QRect(240, 120, 61, 33));
        sizePolicy1.setHeightForWidth(relaxReset->sizePolicy().hasHeightForWidth());
        relaxReset->setSizePolicy(sizePolicy1);
        relaxReset->setMaximumSize(QSize(150, 16777215));
        relaxReset->setFocusPolicy(Qt::NoFocus);
        relaxSavePath = new QLineEdit(relax);
        relaxSavePath->setObjectName("relaxSavePath");
        relaxSavePath->setGeometry(QRect(403, 90, 125, 21));
        relaxSavePath->setFocusPolicy(Qt::NoFocus);
        relaxSaveAs = new QPushButton(relax);
        relaxSaveAs->setObjectName("relaxSaveAs");
        relaxSaveAs->setGeometry(QRect(241, 50, 78, 33));
        relaxSaveAs->setFocusPolicy(Qt::NoFocus);
        relaxNameSave = new QLineEdit(relax);
        relaxNameSave->setObjectName("relaxNameSave");
        relaxNameSave->setGeometry(QRect(242, 90, 125, 21));
        relaxNameSave->setFocusPolicy(Qt::NoFocus);
        relaxNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        relaxNameSave->setDragEnabled(false);
        relaxNameSave->setClearButtonEnabled(false);
        relaxButton = new QPushButton(relax);
        relaxButton->setObjectName("relaxButton");
        relaxButton->setGeometry(QRect(323, 120, 106, 33));
        sizePolicy1.setHeightForWidth(relaxButton->sizePolicy().hasHeightForWidth());
        relaxButton->setSizePolicy(sizePolicy1);
        relaxButton->setMinimumSize(QSize(0, 0));
        relaxButton->setMaximumSize(QSize(150, 16777215));
        relaxButton->setFocusPolicy(Qt::NoFocus);
        relaxButton->setAutoFillBackground(false);
        relaxButton->setAutoDefault(false);
        relaxButton->setFlat(false);
        splitter = new QSplitter(relax);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 10, 211, 201));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName("layoutWidget_4");
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        relaxAddFile = new QPushButton(layoutWidget_4);
        relaxAddFile->setObjectName("relaxAddFile");
        sizePolicy.setHeightForWidth(relaxAddFile->sizePolicy().hasHeightForWidth());
        relaxAddFile->setSizePolicy(sizePolicy);
        relaxAddFile->setMinimumSize(QSize(100, 0));
        relaxAddFile->setMaximumSize(QSize(100, 16777215));
        relaxAddFile->setFocusPolicy(Qt::NoFocus);
        relaxAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        relaxAddFile->setFlat(false);

        horizontalLayout_3->addWidget(relaxAddFile);

        relaxRemoveFile = new QPushButton(layoutWidget_4);
        relaxRemoveFile->setObjectName("relaxRemoveFile");
        sizePolicy.setHeightForWidth(relaxRemoveFile->sizePolicy().hasHeightForWidth());
        relaxRemoveFile->setSizePolicy(sizePolicy);
        relaxRemoveFile->setMinimumSize(QSize(100, 0));
        relaxRemoveFile->setMaximumSize(QSize(100, 16777215));
        relaxRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(relaxRemoveFile);

        splitter->addWidget(layoutWidget_4);
        relaxFileNames = new QListWidget(splitter);
        relaxFileNames->setObjectName("relaxFileNames");
        relaxFileNames->setFocusPolicy(Qt::ClickFocus);
        relaxFileNames->setFrameShape(QFrame::Box);
        relaxFileNames->setFrameShadow(QFrame::Plain);
        splitter->addWidget(relaxFileNames);
        tabWidget->addTab(relax, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        mergeAddFile->setDefault(false);
        mergeButton->setDefault(true);
        collapseAddFile->setDefault(false);
        collapseButton->setDefault(false);
        mirrorAddFile->setDefault(false);
        mirrorButton->setDefault(false);
        relaxButton->setDefault(false);
        relaxAddFile->setDefault(false);


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
        label_6->setText(QCoreApplication::translate("MainWindow", "Import Closure", nullptr));
        mergeImportClosure->setItemText(0, QCoreApplication::translate("MainWindow", "True", nullptr));
        mergeImportClosure->setItemText(1, QCoreApplication::translate("MainWindow", "False", nullptr));

        mergeImportClosure->setCurrentText(QCoreApplication::translate("MainWindow", "True", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(merge), QCoreApplication::translate("MainWindow", "Merge", nullptr));
        collapseSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Threshhold:", nullptr));
        collapseAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        collapseRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        collapseNameSave->setText(QString());
        collapseNameSave->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        collapseReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        collapseButton->setText(QCoreApplication::translate("MainWindow", "Collapse File", nullptr));
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
        label_5->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        relaxReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        relaxSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        relaxNameSave->setText(QString());
        relaxNameSave->setPlaceholderText(QString());
        relaxButton->setText(QCoreApplication::translate("MainWindow", "Relax File", nullptr));
        relaxAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        relaxRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(relax), QCoreApplication::translate("MainWindow", "Relax", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

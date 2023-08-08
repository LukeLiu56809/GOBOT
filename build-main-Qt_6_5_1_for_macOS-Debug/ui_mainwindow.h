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
#include <QtWidgets/QButtonGroup>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mergeSaveAs;
    QLineEdit *mergeNameSave;
    QLabel *label;
    QLineEdit *mergeSavePath;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *mergeReset;
    QPushButton *mergeButton;
    QSplitter *splitter_2;
    QLabel *label_6;
    QComboBox *mergeImportClosure;
    QWidget *unmerge;
    QLabel *label_11;
    QFrame *line_2;
    QLabel *label_37;
    QWidget *layoutWidget_56;
    QHBoxLayout *horizontalLayout_72;
    QPushButton *unmergeAddMoreFiles;
    QPushButton *unmergeRemoveMoreFiles;
    QFrame *line_4;
    QWidget *layoutWidget_57;
    QHBoxLayout *horizontalLayout_73;
    QPushButton *unmergeSaveAs;
    QLineEdit *unmergeNameSave;
    QLabel *label_38;
    QLineEdit *unmergeSavePath;
    QWidget *layoutWidget_58;
    QHBoxLayout *horizontalLayout_74;
    QPushButton *unmergeReset;
    QPushButton *unmergeButton;
    QListWidget *firstFile;
    QListWidget *moreFiles;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_71;
    QPushButton *unmergeAddFirstFile;
    QPushButton *unmergeRemoveFirstFile;
    QWidget *collapse;
    QListWidget *collapseFileNames;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *collapseAddFile;
    QPushButton *collapseRemoveFile;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *collapseSaveAs;
    QLineEdit *collapseNameSave;
    QLabel *label_2;
    QLineEdit *collapseSavePath;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *collapseReset;
    QPushButton *collapseButton;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *collapseThreshold;
    QSpinBox *collapseThresholdEdit;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *collapsePreciousClasses;
    QLineEdit *collapsePreciousClassesEdit;
    QWidget *layoutWidget7;
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
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mirrorSaveAs;
    QLineEdit *mirrorNameSave;
    QLabel *label_4;
    QLineEdit *mirrorSavePath;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mirrorReset;
    QPushButton *mirrorButton;
    QWidget *relax;
    QListWidget *relaxFileNames;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *relaxAddFile;
    QPushButton *relaxRemoveFile;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *relaxSaveAs;
    QLineEdit *relaxNameSave;
    QLabel *label_5;
    QLineEdit *relaxSavePath;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *relaxReset;
    QPushButton *relaxButton;
    QWidget *reduce;
    QWidget *layoutWidget13;
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
    QWidget *layoutWidget14;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_18;
    QComboBox *convertFormat;
    QWidget *diff;
    QWidget *layoutWidget_31;
    QHBoxLayout *horizontalLayout_45;
    QPushButton *mergeReset_3;
    QPushButton *mergeButton_3;
    QWidget *layoutWidget_33;
    QHBoxLayout *horizontalLayout_47;
    QPushButton *mergeSaveAs_3;
    QLineEdit *mergeNameSave_3;
    QLabel *label_21;
    QLineEdit *mergeSavePath_3;
    QLabel *label_22;
    QLabel *label_23;
    QWidget *layoutWidget15;
    QHBoxLayout *horizontalLayout_46;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit;
    QWidget *layoutWidget16;
    QHBoxLayout *horizontalLayout_48;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QWidget *validate;
    QWidget *layoutWidget_32;
    QHBoxLayout *horizontalLayout_49;
    QPushButton *validateAddFile;
    QPushButton *validateRemoveFile;
    QWidget *layoutWidget_34;
    QHBoxLayout *horizontalLayout_50;
    QPushButton *validateReset;
    QPushButton *validateButton;
    QListWidget *validateFileNames;
    QWidget *layoutWidget_35;
    QHBoxLayout *horizontalLayout_51;
    QPushButton *validateSaveAs;
    QLineEdit *validateNameSave;
    QLabel *label_24;
    QLineEdit *validateSavePath;
    QWidget *layoutWidget_36;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_25;
    QComboBox *validateProfile;
    QWidget *repair;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *repairClasses;
    QLineEdit *repairClassesEdit;
    QListWidget *repairFileNames;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *repairSaveAs;
    QLineEdit *repairNameSave;
    QLabel *label_9;
    QLineEdit *repairSavePath;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *repairTerms;
    QPushButton *repairTermsFile;
    QLineEdit *repairTermsEdit;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *repairReset;
    QPushButton *repairButton;
    QLabel *label_10;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *repairAddFile;
    QPushButton *repairRemoveFile;
    QWidget *measure;
    QWidget *layoutWidget_59;
    QHBoxLayout *horizontalLayout_75;
    QPushButton *measureAddFile;
    QPushButton *measureRemoveFile;
    QWidget *layoutWidget_60;
    QHBoxLayout *horizontalLayout_76;
    QPushButton *measureSaveAs;
    QLineEdit *measureNameSave;
    QLabel *label_39;
    QLineEdit *measureSavePath;
    QWidget *layoutWidget_61;
    QHBoxLayout *horizontalLayout_77;
    QPushButton *measureReset;
    QPushButton *measureButton;
    QListWidget *measureFileNames;
    QWidget *layoutWidget_62;
    QHBoxLayout *horizontalLayout_78;
    QLabel *label_40;
    QComboBox *measureFormat;
    QLabel *label_41;
    QCheckBox *all;
    QCheckBox *extended;
    QCheckBox *essential;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_79;
    QCheckBox *reasoner;
    QComboBox *reasonerMetrics;
    QButtonGroup *buttonGroup;

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
        layoutWidget_2->setGeometry(QRect(10, 10, 212, 41));
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
        splitter_3->setGeometry(QRect(240, 50, 192, 32));
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
        layoutWidget = new QWidget(merge);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mergeSaveAs = new QPushButton(layoutWidget);
        mergeSaveAs->setObjectName("mergeSaveAs");
        mergeSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(mergeSaveAs);

        mergeNameSave = new QLineEdit(layoutWidget);
        mergeNameSave->setObjectName("mergeNameSave");
        mergeNameSave->setFocusPolicy(Qt::NoFocus);
        mergeNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mergeNameSave->setDragEnabled(false);
        mergeNameSave->setClearButtonEnabled(false);

        horizontalLayout_6->addWidget(mergeNameSave);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label);

        mergeSavePath = new QLineEdit(layoutWidget);
        mergeSavePath->setObjectName("mergeSavePath");
        mergeSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(mergeSavePath);

        layoutWidget1 = new QWidget(merge);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(240, 220, 157, 32));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        mergeReset = new QPushButton(layoutWidget1);
        mergeReset->setObjectName("mergeReset");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mergeReset->sizePolicy().hasHeightForWidth());
        mergeReset->setSizePolicy(sizePolicy1);
        mergeReset->setMaximumSize(QSize(150, 16777215));
        mergeReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(mergeReset);

        mergeButton = new QPushButton(layoutWidget1);
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
        splitter_2->setGeometry(QRect(240, 80, 157, 32));
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
        unmerge = new QWidget();
        unmerge->setObjectName("unmerge");
        label_11 = new QLabel(unmerge);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(33, 11, 164, 16));
        label_11->setFont(font3);
        line_2 = new QFrame(unmerge);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(11, 20, 209, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_37 = new QLabel(unmerge);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(60, 100, 111, 16));
        label_37->setFont(font3);
        layoutWidget_56 = new QWidget(unmerge);
        layoutWidget_56->setObjectName("layoutWidget_56");
        layoutWidget_56->setGeometry(QRect(10, 120, 212, 32));
        horizontalLayout_72 = new QHBoxLayout(layoutWidget_56);
        horizontalLayout_72->setObjectName("horizontalLayout_72");
        horizontalLayout_72->setContentsMargins(0, 0, 0, 0);
        unmergeAddMoreFiles = new QPushButton(layoutWidget_56);
        unmergeAddMoreFiles->setObjectName("unmergeAddMoreFiles");
        sizePolicy.setHeightForWidth(unmergeAddMoreFiles->sizePolicy().hasHeightForWidth());
        unmergeAddMoreFiles->setSizePolicy(sizePolicy);
        unmergeAddMoreFiles->setMinimumSize(QSize(100, 0));
        unmergeAddMoreFiles->setMaximumSize(QSize(100, 16777215));
        unmergeAddMoreFiles->setFocusPolicy(Qt::NoFocus);
        unmergeAddMoreFiles->setContextMenuPolicy(Qt::DefaultContextMenu);
        unmergeAddMoreFiles->setFlat(false);

        horizontalLayout_72->addWidget(unmergeAddMoreFiles);

        unmergeRemoveMoreFiles = new QPushButton(layoutWidget_56);
        unmergeRemoveMoreFiles->setObjectName("unmergeRemoveMoreFiles");
        sizePolicy.setHeightForWidth(unmergeRemoveMoreFiles->sizePolicy().hasHeightForWidth());
        unmergeRemoveMoreFiles->setSizePolicy(sizePolicy);
        unmergeRemoveMoreFiles->setMinimumSize(QSize(100, 0));
        unmergeRemoveMoreFiles->setMaximumSize(QSize(100, 16777215));
        unmergeRemoveMoreFiles->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_72->addWidget(unmergeRemoveMoreFiles);

        line_4 = new QFrame(unmerge);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(10, 110, 209, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget_57 = new QWidget(unmerge);
        layoutWidget_57->setObjectName("layoutWidget_57");
        layoutWidget_57->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_73 = new QHBoxLayout(layoutWidget_57);
        horizontalLayout_73->setObjectName("horizontalLayout_73");
        horizontalLayout_73->setContentsMargins(0, 0, 0, 0);
        unmergeSaveAs = new QPushButton(layoutWidget_57);
        unmergeSaveAs->setObjectName("unmergeSaveAs");
        unmergeSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_73->addWidget(unmergeSaveAs);

        unmergeNameSave = new QLineEdit(layoutWidget_57);
        unmergeNameSave->setObjectName("unmergeNameSave");
        unmergeNameSave->setFocusPolicy(Qt::NoFocus);
        unmergeNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        unmergeNameSave->setDragEnabled(false);
        unmergeNameSave->setClearButtonEnabled(false);

        horizontalLayout_73->addWidget(unmergeNameSave);

        label_38 = new QLabel(layoutWidget_57);
        label_38->setObjectName("label_38");
        label_38->setAlignment(Qt::AlignCenter);

        horizontalLayout_73->addWidget(label_38);

        unmergeSavePath = new QLineEdit(layoutWidget_57);
        unmergeSavePath->setObjectName("unmergeSavePath");
        unmergeSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_73->addWidget(unmergeSavePath);

        layoutWidget_58 = new QWidget(unmerge);
        layoutWidget_58->setObjectName("layoutWidget_58");
        layoutWidget_58->setGeometry(QRect(240, 220, 171, 32));
        horizontalLayout_74 = new QHBoxLayout(layoutWidget_58);
        horizontalLayout_74->setObjectName("horizontalLayout_74");
        horizontalLayout_74->setContentsMargins(0, 0, 0, 0);
        unmergeReset = new QPushButton(layoutWidget_58);
        unmergeReset->setObjectName("unmergeReset");
        sizePolicy1.setHeightForWidth(unmergeReset->sizePolicy().hasHeightForWidth());
        unmergeReset->setSizePolicy(sizePolicy1);
        unmergeReset->setMaximumSize(QSize(150, 16777215));
        unmergeReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_74->addWidget(unmergeReset);

        unmergeButton = new QPushButton(layoutWidget_58);
        unmergeButton->setObjectName("unmergeButton");
        sizePolicy1.setHeightForWidth(unmergeButton->sizePolicy().hasHeightForWidth());
        unmergeButton->setSizePolicy(sizePolicy1);
        unmergeButton->setMinimumSize(QSize(0, 0));
        unmergeButton->setMaximumSize(QSize(150, 16777215));
        unmergeButton->setFont(font4);
        unmergeButton->setFocusPolicy(Qt::NoFocus);
        unmergeButton->setAutoFillBackground(false);
        unmergeButton->setCheckable(false);
        unmergeButton->setChecked(false);
        unmergeButton->setAutoExclusive(false);
        unmergeButton->setAutoDefault(false);
        unmergeButton->setFlat(false);

        horizontalLayout_74->addWidget(unmergeButton);

        firstFile = new QListWidget(unmerge);
        firstFile->setObjectName("firstFile");
        firstFile->setGeometry(QRect(10, 70, 211, 21));
        firstFile->setFrameShape(QFrame::Box);
        firstFile->setFrameShadow(QFrame::Plain);
        moreFiles = new QListWidget(unmerge);
        moreFiles->setObjectName("moreFiles");
        moreFiles->setGeometry(QRect(10, 160, 211, 91));
        moreFiles->setFrameShape(QFrame::Box);
        moreFiles->setFrameShadow(QFrame::Plain);
        widget = new QWidget(unmerge);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 30, 212, 32));
        horizontalLayout_71 = new QHBoxLayout(widget);
        horizontalLayout_71->setObjectName("horizontalLayout_71");
        horizontalLayout_71->setContentsMargins(0, 0, 0, 0);
        unmergeAddFirstFile = new QPushButton(widget);
        unmergeAddFirstFile->setObjectName("unmergeAddFirstFile");
        sizePolicy.setHeightForWidth(unmergeAddFirstFile->sizePolicy().hasHeightForWidth());
        unmergeAddFirstFile->setSizePolicy(sizePolicy);
        unmergeAddFirstFile->setMinimumSize(QSize(100, 0));
        unmergeAddFirstFile->setMaximumSize(QSize(100, 16777215));
        unmergeAddFirstFile->setFocusPolicy(Qt::NoFocus);
        unmergeAddFirstFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        unmergeAddFirstFile->setFlat(false);

        horizontalLayout_71->addWidget(unmergeAddFirstFile);

        unmergeRemoveFirstFile = new QPushButton(widget);
        unmergeRemoveFirstFile->setObjectName("unmergeRemoveFirstFile");
        sizePolicy.setHeightForWidth(unmergeRemoveFirstFile->sizePolicy().hasHeightForWidth());
        unmergeRemoveFirstFile->setSizePolicy(sizePolicy);
        unmergeRemoveFirstFile->setMinimumSize(QSize(100, 0));
        unmergeRemoveFirstFile->setMaximumSize(QSize(100, 16777215));
        unmergeRemoveFirstFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_71->addWidget(unmergeRemoveFirstFile);

        tabWidget->addTab(unmerge, QString());
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
        layoutWidget2 = new QWidget(collapse);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        collapseAddFile = new QPushButton(layoutWidget2);
        collapseAddFile->setObjectName("collapseAddFile");
        sizePolicy.setHeightForWidth(collapseAddFile->sizePolicy().hasHeightForWidth());
        collapseAddFile->setSizePolicy(sizePolicy);
        collapseAddFile->setMinimumSize(QSize(100, 0));
        collapseAddFile->setFocusPolicy(Qt::NoFocus);
        collapseAddFile->setFlat(false);

        horizontalLayout_8->addWidget(collapseAddFile);

        collapseRemoveFile = new QPushButton(layoutWidget2);
        collapseRemoveFile->setObjectName("collapseRemoveFile");
        sizePolicy.setHeightForWidth(collapseRemoveFile->sizePolicy().hasHeightForWidth());
        collapseRemoveFile->setSizePolicy(sizePolicy);
        collapseRemoveFile->setMinimumSize(QSize(100, 0));
        collapseRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(collapseRemoveFile);

        layoutWidget3 = new QWidget(collapse);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        collapseSaveAs = new QPushButton(layoutWidget3);
        collapseSaveAs->setObjectName("collapseSaveAs");
        collapseSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_9->addWidget(collapseSaveAs);

        collapseNameSave = new QLineEdit(layoutWidget3);
        collapseNameSave->setObjectName("collapseNameSave");
        collapseNameSave->setFocusPolicy(Qt::NoFocus);
        collapseNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        collapseNameSave->setDragEnabled(false);
        collapseNameSave->setClearButtonEnabled(false);

        horizontalLayout_9->addWidget(collapseNameSave);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_2);

        collapseSavePath = new QLineEdit(layoutWidget3);
        collapseSavePath->setObjectName("collapseSavePath");
        collapseSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_9->addWidget(collapseSavePath);

        layoutWidget4 = new QWidget(collapse);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(240, 220, 163, 32));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        collapseReset = new QPushButton(layoutWidget4);
        collapseReset->setObjectName("collapseReset");
        sizePolicy1.setHeightForWidth(collapseReset->sizePolicy().hasHeightForWidth());
        collapseReset->setSizePolicy(sizePolicy1);
        collapseReset->setMaximumSize(QSize(150, 16777215));
        collapseReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_10->addWidget(collapseReset);

        collapseButton = new QPushButton(layoutWidget4);
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

        layoutWidget5 = new QWidget(collapse);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(240, 130, 121, 28));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        collapseThreshold = new QCheckBox(layoutWidget5);
        collapseThreshold->setObjectName("collapseThreshold");
        collapseThreshold->setFont(font3);
        collapseThreshold->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_11->addWidget(collapseThreshold);

        collapseThresholdEdit = new QSpinBox(layoutWidget5);
        collapseThresholdEdit->setObjectName("collapseThresholdEdit");
        collapseThresholdEdit->setFocusPolicy(Qt::NoFocus);
        collapseThresholdEdit->setMinimum(2);

        horizontalLayout_11->addWidget(collapseThresholdEdit);

        layoutWidget6 = new QWidget(collapse);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(260, 70, 234, 31));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        collapsePreciousClasses = new QCheckBox(layoutWidget6);
        collapsePreciousClasses->setObjectName("collapsePreciousClasses");
        collapsePreciousClasses->setFocusPolicy(Qt::ClickFocus);
        collapsePreciousClasses->setCheckable(true);
        collapsePreciousClasses->setChecked(false);
        collapsePreciousClasses->setAutoRepeat(false);
        collapsePreciousClasses->setAutoExclusive(false);
        collapsePreciousClasses->setTristate(false);

        horizontalLayout_12->addWidget(collapsePreciousClasses);

        collapsePreciousClassesEdit = new QLineEdit(layoutWidget6);
        collapsePreciousClassesEdit->setObjectName("collapsePreciousClassesEdit");
        collapsePreciousClassesEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_12->addWidget(collapsePreciousClassesEdit);

        layoutWidget7 = new QWidget(collapse);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(260, 100, 328, 33));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        collapsePreciousTerms = new QCheckBox(layoutWidget7);
        collapsePreciousTerms->setObjectName("collapsePreciousTerms");
        collapsePreciousTerms->setFocusPolicy(Qt::ClickFocus);
        collapsePreciousTerms->setChecked(false);
        collapsePreciousTerms->setTristate(false);

        horizontalLayout_13->addWidget(collapsePreciousTerms);

        collapsePreciousTermsFile = new QPushButton(layoutWidget7);
        collapsePreciousTermsFile->setObjectName("collapsePreciousTermsFile");

        horizontalLayout_13->addWidget(collapsePreciousTermsFile);

        collapsePreciousTermsEdit = new QLineEdit(layoutWidget7);
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
        layoutWidget8 = new QWidget(mirror);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mirrorSaveAs = new QPushButton(layoutWidget8);
        mirrorSaveAs->setObjectName("mirrorSaveAs");
        mirrorSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(mirrorSaveAs);

        mirrorNameSave = new QLineEdit(layoutWidget8);
        mirrorNameSave->setObjectName("mirrorNameSave");
        mirrorNameSave->setFocusPolicy(Qt::NoFocus);
        mirrorNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mirrorNameSave->setDragEnabled(false);
        mirrorNameSave->setClearButtonEnabled(false);

        horizontalLayout_4->addWidget(mirrorNameSave);

        label_4 = new QLabel(layoutWidget8);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        mirrorSavePath = new QLineEdit(layoutWidget8);
        mirrorSavePath->setObjectName("mirrorSavePath");
        mirrorSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(mirrorSavePath);

        layoutWidget9 = new QWidget(mirror);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(240, 220, 151, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mirrorReset = new QPushButton(layoutWidget9);
        mirrorReset->setObjectName("mirrorReset");
        sizePolicy1.setHeightForWidth(mirrorReset->sizePolicy().hasHeightForWidth());
        mirrorReset->setSizePolicy(sizePolicy1);
        mirrorReset->setMaximumSize(QSize(150, 16777215));
        mirrorReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(mirrorReset);

        mirrorButton = new QPushButton(layoutWidget9);
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
        layoutWidget10 = new QWidget(relax);
        layoutWidget10->setObjectName("layoutWidget10");
        layoutWidget10->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        relaxAddFile = new QPushButton(layoutWidget10);
        relaxAddFile->setObjectName("relaxAddFile");
        sizePolicy.setHeightForWidth(relaxAddFile->sizePolicy().hasHeightForWidth());
        relaxAddFile->setSizePolicy(sizePolicy);
        relaxAddFile->setMinimumSize(QSize(100, 0));
        relaxAddFile->setMaximumSize(QSize(100, 16777215));
        relaxAddFile->setFocusPolicy(Qt::NoFocus);
        relaxAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        relaxAddFile->setFlat(false);

        horizontalLayout_3->addWidget(relaxAddFile);

        relaxRemoveFile = new QPushButton(layoutWidget10);
        relaxRemoveFile->setObjectName("relaxRemoveFile");
        sizePolicy.setHeightForWidth(relaxRemoveFile->sizePolicy().hasHeightForWidth());
        relaxRemoveFile->setSizePolicy(sizePolicy);
        relaxRemoveFile->setMinimumSize(QSize(100, 0));
        relaxRemoveFile->setMaximumSize(QSize(100, 16777215));
        relaxRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(relaxRemoveFile);

        layoutWidget11 = new QWidget(relax);
        layoutWidget11->setObjectName("layoutWidget11");
        layoutWidget11->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        relaxSaveAs = new QPushButton(layoutWidget11);
        relaxSaveAs->setObjectName("relaxSaveAs");
        relaxSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(relaxSaveAs);

        relaxNameSave = new QLineEdit(layoutWidget11);
        relaxNameSave->setObjectName("relaxNameSave");
        relaxNameSave->setFocusPolicy(Qt::NoFocus);
        relaxNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        relaxNameSave->setDragEnabled(false);
        relaxNameSave->setClearButtonEnabled(false);

        horizontalLayout_14->addWidget(relaxNameSave);

        label_5 = new QLabel(layoutWidget11);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_5);

        relaxSavePath = new QLineEdit(layoutWidget11);
        relaxSavePath->setObjectName("relaxSavePath");
        relaxSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(relaxSavePath);

        layoutWidget12 = new QWidget(relax);
        layoutWidget12->setObjectName("layoutWidget12");
        layoutWidget12->setGeometry(QRect(240, 220, 147, 32));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        relaxReset = new QPushButton(layoutWidget12);
        relaxReset->setObjectName("relaxReset");
        sizePolicy1.setHeightForWidth(relaxReset->sizePolicy().hasHeightForWidth());
        relaxReset->setSizePolicy(sizePolicy1);
        relaxReset->setMaximumSize(QSize(150, 16777215));
        relaxReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(relaxReset);

        relaxButton = new QPushButton(layoutWidget12);
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
        layoutWidget13 = new QWidget(reduce);
        layoutWidget13->setObjectName("layoutWidget13");
        layoutWidget13->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget13);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        reduceSaveAs = new QPushButton(layoutWidget13);
        reduceSaveAs->setObjectName("reduceSaveAs");
        reduceSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_16->addWidget(reduceSaveAs);

        reduceNameSave = new QLineEdit(layoutWidget13);
        reduceNameSave->setObjectName("reduceNameSave");
        reduceNameSave->setFocusPolicy(Qt::NoFocus);
        reduceNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        reduceNameSave->setDragEnabled(false);
        reduceNameSave->setClearButtonEnabled(false);

        horizontalLayout_16->addWidget(reduceNameSave);

        label_8 = new QLabel(layoutWidget13);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_8);

        reduceSavePath = new QLineEdit(layoutWidget13);
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
        layoutWidget_26->setGeometry(QRect(240, 220, 159, 32));
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
        layoutWidget14 = new QWidget(convert);
        layoutWidget14->setObjectName("layoutWidget14");
        layoutWidget14->setGeometry(QRect(240, 50, 117, 32));
        horizontalLayout_40 = new QHBoxLayout(layoutWidget14);
        horizontalLayout_40->setObjectName("horizontalLayout_40");
        horizontalLayout_40->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget14);
        label_18->setObjectName("label_18");
        label_18->setFont(font3);

        horizontalLayout_40->addWidget(label_18);

        convertFormat = new QComboBox(layoutWidget14);
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
        diff = new QWidget();
        diff->setObjectName("diff");
        layoutWidget_31 = new QWidget(diff);
        layoutWidget_31->setObjectName("layoutWidget_31");
        layoutWidget_31->setGeometry(QRect(240, 220, 160, 32));
        horizontalLayout_45 = new QHBoxLayout(layoutWidget_31);
        horizontalLayout_45->setObjectName("horizontalLayout_45");
        horizontalLayout_45->setContentsMargins(0, 0, 0, 0);
        mergeReset_3 = new QPushButton(layoutWidget_31);
        mergeReset_3->setObjectName("mergeReset_3");
        sizePolicy1.setHeightForWidth(mergeReset_3->sizePolicy().hasHeightForWidth());
        mergeReset_3->setSizePolicy(sizePolicy1);
        mergeReset_3->setMaximumSize(QSize(150, 16777215));
        mergeReset_3->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_45->addWidget(mergeReset_3);

        mergeButton_3 = new QPushButton(layoutWidget_31);
        mergeButton_3->setObjectName("mergeButton_3");
        sizePolicy1.setHeightForWidth(mergeButton_3->sizePolicy().hasHeightForWidth());
        mergeButton_3->setSizePolicy(sizePolicy1);
        mergeButton_3->setMinimumSize(QSize(0, 0));
        mergeButton_3->setMaximumSize(QSize(150, 16777215));
        mergeButton_3->setFont(font4);
        mergeButton_3->setFocusPolicy(Qt::NoFocus);
        mergeButton_3->setAutoFillBackground(false);
        mergeButton_3->setCheckable(false);
        mergeButton_3->setChecked(false);
        mergeButton_3->setAutoExclusive(false);
        mergeButton_3->setAutoDefault(false);
        mergeButton_3->setFlat(false);

        horizontalLayout_45->addWidget(mergeButton_3);

        layoutWidget_33 = new QWidget(diff);
        layoutWidget_33->setObjectName("layoutWidget_33");
        layoutWidget_33->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_47 = new QHBoxLayout(layoutWidget_33);
        horizontalLayout_47->setObjectName("horizontalLayout_47");
        horizontalLayout_47->setContentsMargins(0, 0, 0, 0);
        mergeSaveAs_3 = new QPushButton(layoutWidget_33);
        mergeSaveAs_3->setObjectName("mergeSaveAs_3");
        mergeSaveAs_3->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_47->addWidget(mergeSaveAs_3);

        mergeNameSave_3 = new QLineEdit(layoutWidget_33);
        mergeNameSave_3->setObjectName("mergeNameSave_3");
        mergeNameSave_3->setFocusPolicy(Qt::NoFocus);
        mergeNameSave_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mergeNameSave_3->setDragEnabled(false);
        mergeNameSave_3->setClearButtonEnabled(false);

        horizontalLayout_47->addWidget(mergeNameSave_3);

        label_21 = new QLabel(layoutWidget_33);
        label_21->setObjectName("label_21");
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_47->addWidget(label_21);

        mergeSavePath_3 = new QLineEdit(layoutWidget_33);
        mergeSavePath_3->setObjectName("mergeSavePath_3");
        mergeSavePath_3->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_47->addWidget(mergeSavePath_3);

        label_22 = new QLabel(diff);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 10, 61, 21));
        label_22->setFont(font3);
        label_23 = new QLabel(diff);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(380, 60, 31, 21));
        label_23->setFont(font3);
        layoutWidget15 = new QWidget(diff);
        layoutWidget15->setObjectName("layoutWidget15");
        layoutWidget15->setGeometry(QRect(30, 60, 148, 28));
        horizontalLayout_46 = new QHBoxLayout(layoutWidget15);
        horizontalLayout_46->setObjectName("horizontalLayout_46");
        horizontalLayout_46->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(layoutWidget15);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout_46->addWidget(checkBox_2);

        lineEdit = new QLineEdit(layoutWidget15);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_46->addWidget(lineEdit);

        layoutWidget16 = new QWidget(diff);
        layoutWidget16->setObjectName("layoutWidget16");
        layoutWidget16->setGeometry(QRect(30, 30, 284, 33));
        horizontalLayout_48 = new QHBoxLayout(layoutWidget16);
        horizontalLayout_48->setObjectName("horizontalLayout_48");
        horizontalLayout_48->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget16);
        checkBox->setObjectName("checkBox");

        horizontalLayout_48->addWidget(checkBox);

        pushButton = new QPushButton(layoutWidget16);
        pushButton->setObjectName("pushButton");

        horizontalLayout_48->addWidget(pushButton);

        lineEdit_2 = new QLineEdit(layoutWidget16);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_48->addWidget(lineEdit_2);

        tabWidget->addTab(diff, QString());
        validate = new QWidget();
        validate->setObjectName("validate");
        layoutWidget_32 = new QWidget(validate);
        layoutWidget_32->setObjectName("layoutWidget_32");
        layoutWidget_32->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_49 = new QHBoxLayout(layoutWidget_32);
        horizontalLayout_49->setObjectName("horizontalLayout_49");
        horizontalLayout_49->setContentsMargins(0, 0, 0, 0);
        validateAddFile = new QPushButton(layoutWidget_32);
        validateAddFile->setObjectName("validateAddFile");
        sizePolicy.setHeightForWidth(validateAddFile->sizePolicy().hasHeightForWidth());
        validateAddFile->setSizePolicy(sizePolicy);
        validateAddFile->setMinimumSize(QSize(100, 0));
        validateAddFile->setMaximumSize(QSize(100, 16777215));
        validateAddFile->setFocusPolicy(Qt::NoFocus);
        validateAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        validateAddFile->setFlat(false);

        horizontalLayout_49->addWidget(validateAddFile);

        validateRemoveFile = new QPushButton(layoutWidget_32);
        validateRemoveFile->setObjectName("validateRemoveFile");
        sizePolicy.setHeightForWidth(validateRemoveFile->sizePolicy().hasHeightForWidth());
        validateRemoveFile->setSizePolicy(sizePolicy);
        validateRemoveFile->setMinimumSize(QSize(100, 0));
        validateRemoveFile->setMaximumSize(QSize(100, 16777215));
        validateRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_49->addWidget(validateRemoveFile);

        layoutWidget_34 = new QWidget(validate);
        layoutWidget_34->setObjectName("layoutWidget_34");
        layoutWidget_34->setGeometry(QRect(240, 220, 161, 32));
        horizontalLayout_50 = new QHBoxLayout(layoutWidget_34);
        horizontalLayout_50->setObjectName("horizontalLayout_50");
        horizontalLayout_50->setContentsMargins(0, 0, 0, 0);
        validateReset = new QPushButton(layoutWidget_34);
        validateReset->setObjectName("validateReset");
        sizePolicy1.setHeightForWidth(validateReset->sizePolicy().hasHeightForWidth());
        validateReset->setSizePolicy(sizePolicy1);
        validateReset->setMaximumSize(QSize(150, 16777215));
        validateReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_50->addWidget(validateReset);

        validateButton = new QPushButton(layoutWidget_34);
        validateButton->setObjectName("validateButton");
        sizePolicy1.setHeightForWidth(validateButton->sizePolicy().hasHeightForWidth());
        validateButton->setSizePolicy(sizePolicy1);
        validateButton->setMinimumSize(QSize(0, 0));
        validateButton->setMaximumSize(QSize(150, 16777215));
        validateButton->setFocusPolicy(Qt::NoFocus);
        validateButton->setAutoFillBackground(false);
        validateButton->setAutoDefault(false);
        validateButton->setFlat(false);

        horizontalLayout_50->addWidget(validateButton);

        validateFileNames = new QListWidget(validate);
        validateFileNames->setObjectName("validateFileNames");
        validateFileNames->setGeometry(QRect(10, 50, 211, 201));
        validateFileNames->setFocusPolicy(Qt::ClickFocus);
        validateFileNames->setFrameShape(QFrame::Box);
        validateFileNames->setFrameShadow(QFrame::Plain);
        layoutWidget_35 = new QWidget(validate);
        layoutWidget_35->setObjectName("layoutWidget_35");
        layoutWidget_35->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_51 = new QHBoxLayout(layoutWidget_35);
        horizontalLayout_51->setObjectName("horizontalLayout_51");
        horizontalLayout_51->setContentsMargins(0, 0, 0, 0);
        validateSaveAs = new QPushButton(layoutWidget_35);
        validateSaveAs->setObjectName("validateSaveAs");
        validateSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_51->addWidget(validateSaveAs);

        validateNameSave = new QLineEdit(layoutWidget_35);
        validateNameSave->setObjectName("validateNameSave");
        validateNameSave->setFocusPolicy(Qt::NoFocus);
        validateNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        validateNameSave->setDragEnabled(false);
        validateNameSave->setClearButtonEnabled(false);

        horizontalLayout_51->addWidget(validateNameSave);

        label_24 = new QLabel(layoutWidget_35);
        label_24->setObjectName("label_24");
        label_24->setAlignment(Qt::AlignCenter);

        horizontalLayout_51->addWidget(label_24);

        validateSavePath = new QLineEdit(layoutWidget_35);
        validateSavePath->setObjectName("validateSavePath");
        validateSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_51->addWidget(validateSavePath);

        layoutWidget_36 = new QWidget(validate);
        layoutWidget_36->setObjectName("layoutWidget_36");
        layoutWidget_36->setGeometry(QRect(240, 50, 117, 32));
        horizontalLayout_52 = new QHBoxLayout(layoutWidget_36);
        horizontalLayout_52->setObjectName("horizontalLayout_52");
        horizontalLayout_52->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_36);
        label_25->setObjectName("label_25");
        label_25->setFont(font3);

        horizontalLayout_52->addWidget(label_25);

        validateProfile = new QComboBox(layoutWidget_36);
        validateProfile->addItem(QString());
        validateProfile->addItem(QString());
        validateProfile->addItem(QString());
        validateProfile->addItem(QString());
        validateProfile->addItem(QString());
        validateProfile->setObjectName("validateProfile");

        horizontalLayout_52->addWidget(validateProfile);

        tabWidget->addTab(validate, QString());
        repair = new QWidget();
        repair->setObjectName("repair");
        layoutWidget_6 = new QWidget(repair);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(260, 70, 234, 31));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        repairClasses = new QCheckBox(layoutWidget_6);
        repairClasses->setObjectName("repairClasses");
        repairClasses->setFocusPolicy(Qt::ClickFocus);
        repairClasses->setCheckable(true);
        repairClasses->setChecked(false);
        repairClasses->setAutoRepeat(false);
        repairClasses->setAutoExclusive(false);
        repairClasses->setTristate(false);

        horizontalLayout_19->addWidget(repairClasses);

        repairClassesEdit = new QLineEdit(layoutWidget_6);
        repairClassesEdit->setObjectName("repairClassesEdit");
        repairClassesEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_19->addWidget(repairClassesEdit);

        repairFileNames = new QListWidget(repair);
        repairFileNames->setObjectName("repairFileNames");
        repairFileNames->setGeometry(QRect(10, 50, 211, 201));
        repairFileNames->setFocusPolicy(Qt::ClickFocus);
        repairFileNames->setFrameShape(QFrame::Box);
        repairFileNames->setFrameShadow(QFrame::Plain);
        layoutWidget_7 = new QWidget(repair);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        repairSaveAs = new QPushButton(layoutWidget_7);
        repairSaveAs->setObjectName("repairSaveAs");
        repairSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_20->addWidget(repairSaveAs);

        repairNameSave = new QLineEdit(layoutWidget_7);
        repairNameSave->setObjectName("repairNameSave");
        repairNameSave->setFocusPolicy(Qt::NoFocus);
        repairNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        repairNameSave->setDragEnabled(false);
        repairNameSave->setClearButtonEnabled(false);

        horizontalLayout_20->addWidget(repairNameSave);

        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_9);

        repairSavePath = new QLineEdit(layoutWidget_7);
        repairSavePath->setObjectName("repairSavePath");
        repairSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_20->addWidget(repairSavePath);

        layoutWidget_8 = new QWidget(repair);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(260, 100, 328, 33));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        repairTerms = new QCheckBox(layoutWidget_8);
        repairTerms->setObjectName("repairTerms");
        repairTerms->setFocusPolicy(Qt::ClickFocus);
        repairTerms->setChecked(false);
        repairTerms->setTristate(false);

        horizontalLayout_21->addWidget(repairTerms);

        repairTermsFile = new QPushButton(layoutWidget_8);
        repairTermsFile->setObjectName("repairTermsFile");

        horizontalLayout_21->addWidget(repairTermsFile);

        repairTermsEdit = new QLineEdit(layoutWidget_8);
        repairTermsEdit->setObjectName("repairTermsEdit");
        repairTermsEdit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_21->addWidget(repairTermsEdit);

        layoutWidget_9 = new QWidget(repair);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(240, 220, 163, 32));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        repairReset = new QPushButton(layoutWidget_9);
        repairReset->setObjectName("repairReset");
        sizePolicy1.setHeightForWidth(repairReset->sizePolicy().hasHeightForWidth());
        repairReset->setSizePolicy(sizePolicy1);
        repairReset->setMaximumSize(QSize(150, 16777215));
        repairReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_22->addWidget(repairReset);

        repairButton = new QPushButton(layoutWidget_9);
        repairButton->setObjectName("repairButton");
        sizePolicy1.setHeightForWidth(repairButton->sizePolicy().hasHeightForWidth());
        repairButton->setSizePolicy(sizePolicy1);
        repairButton->setMinimumSize(QSize(0, 0));
        repairButton->setMaximumSize(QSize(150, 16777215));
        repairButton->setFocusPolicy(Qt::NoFocus);
        repairButton->setAutoFillBackground(false);
        repairButton->setAutoDefault(false);
        repairButton->setFlat(false);

        horizontalLayout_22->addWidget(repairButton);

        label_10 = new QLabel(repair);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(240, 50, 141, 31));
        label_10->setFont(font3);
        layoutWidget_10 = new QWidget(repair);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        repairAddFile = new QPushButton(layoutWidget_10);
        repairAddFile->setObjectName("repairAddFile");
        sizePolicy.setHeightForWidth(repairAddFile->sizePolicy().hasHeightForWidth());
        repairAddFile->setSizePolicy(sizePolicy);
        repairAddFile->setMinimumSize(QSize(100, 0));
        repairAddFile->setFocusPolicy(Qt::NoFocus);
        repairAddFile->setFlat(false);

        horizontalLayout_23->addWidget(repairAddFile);

        repairRemoveFile = new QPushButton(layoutWidget_10);
        repairRemoveFile->setObjectName("repairRemoveFile");
        sizePolicy.setHeightForWidth(repairRemoveFile->sizePolicy().hasHeightForWidth());
        repairRemoveFile->setSizePolicy(sizePolicy);
        repairRemoveFile->setMinimumSize(QSize(100, 0));
        repairRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_23->addWidget(repairRemoveFile);

        tabWidget->addTab(repair, QString());
        measure = new QWidget();
        measure->setObjectName("measure");
        layoutWidget_59 = new QWidget(measure);
        layoutWidget_59->setObjectName("layoutWidget_59");
        layoutWidget_59->setGeometry(QRect(10, 10, 212, 41));
        horizontalLayout_75 = new QHBoxLayout(layoutWidget_59);
        horizontalLayout_75->setObjectName("horizontalLayout_75");
        horizontalLayout_75->setContentsMargins(0, 0, 0, 0);
        measureAddFile = new QPushButton(layoutWidget_59);
        measureAddFile->setObjectName("measureAddFile");
        sizePolicy.setHeightForWidth(measureAddFile->sizePolicy().hasHeightForWidth());
        measureAddFile->setSizePolicy(sizePolicy);
        measureAddFile->setMinimumSize(QSize(100, 0));
        measureAddFile->setMaximumSize(QSize(100, 16777215));
        measureAddFile->setFocusPolicy(Qt::NoFocus);
        measureAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        measureAddFile->setFlat(false);

        horizontalLayout_75->addWidget(measureAddFile);

        measureRemoveFile = new QPushButton(layoutWidget_59);
        measureRemoveFile->setObjectName("measureRemoveFile");
        sizePolicy.setHeightForWidth(measureRemoveFile->sizePolicy().hasHeightForWidth());
        measureRemoveFile->setSizePolicy(sizePolicy);
        measureRemoveFile->setMinimumSize(QSize(100, 0));
        measureRemoveFile->setMaximumSize(QSize(100, 16777215));
        measureRemoveFile->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_75->addWidget(measureRemoveFile);

        layoutWidget_60 = new QWidget(measure);
        layoutWidget_60->setObjectName("layoutWidget_60");
        layoutWidget_60->setGeometry(QRect(240, 190, 401, 33));
        horizontalLayout_76 = new QHBoxLayout(layoutWidget_60);
        horizontalLayout_76->setObjectName("horizontalLayout_76");
        horizontalLayout_76->setContentsMargins(0, 0, 0, 0);
        measureSaveAs = new QPushButton(layoutWidget_60);
        measureSaveAs->setObjectName("measureSaveAs");
        measureSaveAs->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_76->addWidget(measureSaveAs);

        measureNameSave = new QLineEdit(layoutWidget_60);
        measureNameSave->setObjectName("measureNameSave");
        measureNameSave->setFocusPolicy(Qt::NoFocus);
        measureNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        measureNameSave->setDragEnabled(false);
        measureNameSave->setClearButtonEnabled(false);

        horizontalLayout_76->addWidget(measureNameSave);

        label_39 = new QLabel(layoutWidget_60);
        label_39->setObjectName("label_39");
        label_39->setAlignment(Qt::AlignCenter);

        horizontalLayout_76->addWidget(label_39);

        measureSavePath = new QLineEdit(layoutWidget_60);
        measureSavePath->setObjectName("measureSavePath");
        measureSavePath->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_76->addWidget(measureSavePath);

        layoutWidget_61 = new QWidget(measure);
        layoutWidget_61->setObjectName("layoutWidget_61");
        layoutWidget_61->setGeometry(QRect(240, 220, 161, 32));
        horizontalLayout_77 = new QHBoxLayout(layoutWidget_61);
        horizontalLayout_77->setObjectName("horizontalLayout_77");
        horizontalLayout_77->setContentsMargins(0, 0, 0, 0);
        measureReset = new QPushButton(layoutWidget_61);
        measureReset->setObjectName("measureReset");
        sizePolicy1.setHeightForWidth(measureReset->sizePolicy().hasHeightForWidth());
        measureReset->setSizePolicy(sizePolicy1);
        measureReset->setMaximumSize(QSize(150, 16777215));
        measureReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_77->addWidget(measureReset);

        measureButton = new QPushButton(layoutWidget_61);
        measureButton->setObjectName("measureButton");
        sizePolicy1.setHeightForWidth(measureButton->sizePolicy().hasHeightForWidth());
        measureButton->setSizePolicy(sizePolicy1);
        measureButton->setMinimumSize(QSize(0, 0));
        measureButton->setMaximumSize(QSize(150, 16777215));
        measureButton->setFocusPolicy(Qt::NoFocus);
        measureButton->setAutoFillBackground(false);
        measureButton->setAutoDefault(false);
        measureButton->setFlat(false);

        horizontalLayout_77->addWidget(measureButton);

        measureFileNames = new QListWidget(measure);
        measureFileNames->setObjectName("measureFileNames");
        measureFileNames->setGeometry(QRect(10, 50, 211, 201));
        measureFileNames->setFocusPolicy(Qt::ClickFocus);
        measureFileNames->setFrameShape(QFrame::Box);
        measureFileNames->setFrameShadow(QFrame::Plain);
        layoutWidget_62 = new QWidget(measure);
        layoutWidget_62->setObjectName("layoutWidget_62");
        layoutWidget_62->setGeometry(QRect(240, 50, 117, 32));
        horizontalLayout_78 = new QHBoxLayout(layoutWidget_62);
        horizontalLayout_78->setObjectName("horizontalLayout_78");
        horizontalLayout_78->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(layoutWidget_62);
        label_40->setObjectName("label_40");
        label_40->setFont(font3);

        horizontalLayout_78->addWidget(label_40);

        measureFormat = new QComboBox(layoutWidget_62);
        measureFormat->addItem(QString());
        measureFormat->addItem(QString());
        measureFormat->addItem(QString());
        measureFormat->addItem(QString());
        measureFormat->addItem(QString());
        measureFormat->setObjectName("measureFormat");

        horizontalLayout_78->addWidget(measureFormat);

        label_41 = new QLabel(measure);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(240, 80, 41, 26));
        label_41->setFont(font3);
        all = new QCheckBox(measure);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(all);
        all->setObjectName("all");
        all->setGeometry(QRect(260, 138, 38, 18));
        extended = new QCheckBox(measure);
        buttonGroup->addButton(extended);
        extended->setObjectName("extended");
        extended->setGeometry(QRect(260, 119, 72, 18));
        essential = new QCheckBox(measure);
        buttonGroup->addButton(essential);
        essential->setObjectName("essential");
        essential->setGeometry(QRect(260, 100, 121, 18));
        essential->setChecked(true);
        widget1 = new QWidget(measure);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(260, 151, 166, 33));
        horizontalLayout_79 = new QHBoxLayout(widget1);
        horizontalLayout_79->setObjectName("horizontalLayout_79");
        horizontalLayout_79->setContentsMargins(0, 0, 0, 0);
        reasoner = new QCheckBox(widget1);
        buttonGroup->addButton(reasoner);
        reasoner->setObjectName("reasoner");

        horizontalLayout_79->addWidget(reasoner);

        reasonerMetrics = new QComboBox(widget1);
        reasonerMetrics->addItem(QString());
        reasonerMetrics->addItem(QString());
        reasonerMetrics->addItem(QString());
        reasonerMetrics->setObjectName("reasonerMetrics");

        horizontalLayout_79->addWidget(reasonerMetrics);

        tabWidget->addTab(measure, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(10);
        mergeAddFile->setDefault(false);
        mergeButton->setDefault(true);
        unmergeAddMoreFiles->setDefault(false);
        unmergeButton->setDefault(true);
        unmergeAddFirstFile->setDefault(false);
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
        mergeButton_3->setDefault(true);
        validateAddFile->setDefault(false);
        validateButton->setDefault(true);
        repairButton->setDefault(true);
        repairAddFile->setDefault(false);
        measureAddFile->setDefault(false);
        measureButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mainHeader1->setText(QCoreApplication::translate("MainWindow", "ROBOT ", nullptr));
        mergeAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        mergeRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", " Ontology Annotations", nullptr));
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
        label_11->setText(QCoreApplication::translate("MainWindow", "Ontology to remove axioms from", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Axioms to be removed", nullptr));
        unmergeAddMoreFiles->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        unmergeRemoveMoreFiles->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        unmergeSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        unmergeNameSave->setText(QString());
        unmergeNameSave->setPlaceholderText(QString());
        label_38->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        unmergeReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        unmergeButton->setText(QCoreApplication::translate("MainWindow", "Unmerge File", nullptr));
        unmergeAddFirstFile->setText(QCoreApplication::translate("MainWindow", "Add File", nullptr));
        unmergeRemoveFirstFile->setText(QCoreApplication::translate("MainWindow", "Remove File", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(unmerge), QCoreApplication::translate("MainWindow", "Unmerge", nullptr));
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
        convertButton->setText(QCoreApplication::translate("MainWindow", "Convert File", nullptr));
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
        mergeReset_3->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        mergeButton_3->setText(QCoreApplication::translate("MainWindow", "DIff Files", nullptr));
        mergeSaveAs_3->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        mergeNameSave_3->setText(QString());
        mergeNameSave_3->setPlaceholderText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Item 1 (left)", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Item 2", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "IRI", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Ontology", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Select file", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(diff), QCoreApplication::translate("MainWindow", "Diff", nullptr));
        validateAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        validateRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        validateReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        validateButton->setText(QCoreApplication::translate("MainWindow", "Validate File", nullptr));
        validateSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        validateNameSave->setText(QString());
        validateNameSave->setPlaceholderText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        validateProfile->setItemText(0, QCoreApplication::translate("MainWindow", "EL", nullptr));
        validateProfile->setItemText(1, QCoreApplication::translate("MainWindow", "RL", nullptr));
        validateProfile->setItemText(2, QCoreApplication::translate("MainWindow", "QL", nullptr));
        validateProfile->setItemText(3, QCoreApplication::translate("MainWindow", "DL", nullptr));
        validateProfile->setItemText(4, QCoreApplication::translate("MainWindow", "Full", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(validate), QCoreApplication::translate("MainWindow", "Validate", nullptr));
        repairClasses->setText(QCoreApplication::translate("MainWindow", "Classes <IRI/CURIE>", nullptr));
        repairSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        repairNameSave->setText(QString());
        repairNameSave->setPlaceholderText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        repairTerms->setText(QCoreApplication::translate("MainWindow", "Terms <term file>", nullptr));
        repairTermsFile->setText(QCoreApplication::translate("MainWindow", "Select File", nullptr));
        repairReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        repairButton->setText(QCoreApplication::translate("MainWindow", "Repair File", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Migrate annotation axioms", nullptr));
        repairAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        repairRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(repair), QCoreApplication::translate("MainWindow", "Repair", nullptr));
        measureAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        measureRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
        measureSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        measureNameSave->setText(QString());
        measureNameSave->setPlaceholderText(QString());
        label_39->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        measureReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        measureButton->setText(QCoreApplication::translate("MainWindow", "Measure file", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Format", nullptr));
        measureFormat->setItemText(0, QCoreApplication::translate("MainWindow", "tsv", nullptr));
        measureFormat->setItemText(1, QCoreApplication::translate("MainWindow", "csv", nullptr));
        measureFormat->setItemText(2, QCoreApplication::translate("MainWindow", "html", nullptr));
        measureFormat->setItemText(3, QCoreApplication::translate("MainWindow", "json", nullptr));
        measureFormat->setItemText(4, QCoreApplication::translate("MainWindow", "yaml", nullptr));

        label_41->setText(QCoreApplication::translate("MainWindow", "Metrics", nullptr));
        all->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        extended->setText(QCoreApplication::translate("MainWindow", "Extended", nullptr));
        essential->setText(QCoreApplication::translate("MainWindow", "Essential <Default>", nullptr));
        reasoner->setText(QCoreApplication::translate("MainWindow", "Reasoner", nullptr));
        reasonerMetrics->setItemText(0, QCoreApplication::translate("MainWindow", "essential", nullptr));
        reasonerMetrics->setItemText(1, QCoreApplication::translate("MainWindow", "extended", nullptr));
        reasonerMetrics->setItemText(2, QCoreApplication::translate("MainWindow", "all", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(measure), QCoreApplication::translate("MainWindow", "Measure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QPushButton *mergeReset;
    QPushButton *mergeSaveAs;
    QLineEdit *mergeNameSave;
    QLabel *label;
    QLineEdit *mergeSavePath;
    QPushButton *mergeButton;
    QListWidget *mergeFileNames;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *mergeAddFile;
    QPushButton *mergeRemoveFile;
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
    QLineEdit *mirrorNameSave;
    QPushButton *mirrorSaveAs;
    QLabel *label_4;
    QLineEdit *mirrorSavePath;
    QPushButton *mirrorReset;
    QPushButton *mirrorButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(564, 385);
        QFont font;
        font.setFamilies({QString::fromUtf8("Futura")});
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
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setTabBarAutoHide(false);
        merge = new QWidget();
        merge->setObjectName("merge");
        mergeReset = new QPushButton(merge);
        mergeReset->setObjectName("mergeReset");
        mergeReset->setGeometry(QRect(250, 130, 61, 33));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mergeReset->sizePolicy().hasHeightForWidth());
        mergeReset->setSizePolicy(sizePolicy);
        mergeReset->setMaximumSize(QSize(150, 16777215));
        mergeSaveAs = new QPushButton(merge);
        mergeSaveAs->setObjectName("mergeSaveAs");
        mergeSaveAs->setGeometry(QRect(250, 60, 78, 33));
        mergeNameSave = new QLineEdit(merge);
        mergeNameSave->setObjectName("mergeNameSave");
        mergeNameSave->setGeometry(QRect(250, 100, 125, 21));
        mergeNameSave->setFocusPolicy(Qt::NoFocus);
        mergeNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mergeNameSave->setDragEnabled(false);
        mergeNameSave->setClearButtonEnabled(false);
        label = new QLabel(merge);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 100, 18, 17));
        label->setAlignment(Qt::AlignCenter);
        mergeSavePath = new QLineEdit(merge);
        mergeSavePath->setObjectName("mergeSavePath");
        mergeSavePath->setGeometry(QRect(400, 100, 125, 21));
        mergeSavePath->setFocusPolicy(Qt::NoFocus);
        mergeButton = new QPushButton(merge);
        mergeButton->setObjectName("mergeButton");
        mergeButton->setGeometry(QRect(320, 130, 100, 33));
        sizePolicy.setHeightForWidth(mergeButton->sizePolicy().hasHeightForWidth());
        mergeButton->setSizePolicy(sizePolicy);
        mergeButton->setMinimumSize(QSize(0, 0));
        mergeButton->setMaximumSize(QSize(150, 16777215));
        mergeButton->setAutoFillBackground(false);
        mergeButton->setAutoDefault(false);
        mergeButton->setFlat(false);
        mergeFileNames = new QListWidget(merge);
        mergeFileNames->setObjectName("mergeFileNames");
        mergeFileNames->setGeometry(QRect(21, 56, 211, 153));
        mergeFileNames->setFrameShape(QFrame::Box);
        mergeFileNames->setFrameShadow(QFrame::Plain);
        layoutWidget_2 = new QWidget(merge);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(21, 10, 212, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mergeAddFile = new QPushButton(layoutWidget_2);
        mergeAddFile->setObjectName("mergeAddFile");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mergeAddFile->sizePolicy().hasHeightForWidth());
        mergeAddFile->setSizePolicy(sizePolicy1);
        mergeAddFile->setMinimumSize(QSize(100, 0));
        mergeAddFile->setMaximumSize(QSize(100, 16777215));
        mergeAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        mergeAddFile->setFlat(false);

        horizontalLayout->addWidget(mergeAddFile);

        mergeRemoveFile = new QPushButton(layoutWidget_2);
        mergeRemoveFile->setObjectName("mergeRemoveFile");
        sizePolicy1.setHeightForWidth(mergeRemoveFile->sizePolicy().hasHeightForWidth());
        mergeRemoveFile->setSizePolicy(sizePolicy1);
        mergeRemoveFile->setMinimumSize(QSize(100, 0));
        mergeRemoveFile->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(mergeRemoveFile);

        tabWidget->addTab(merge, QString());
        collapse = new QWidget();
        collapse->setObjectName("collapse");
        collapseSaveAs = new QPushButton(collapse);
        collapseSaveAs->setObjectName("collapseSaveAs");
        collapseSaveAs->setGeometry(QRect(291, 90, 78, 33));
        label_3 = new QLabel(collapse);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(291, 61, 68, 17));
        collapseThreshold = new QLineEdit(collapse);
        collapseThreshold->setObjectName("collapseThreshold");
        collapseThreshold->setGeometry(QRect(366, 61, 46, 21));
        collapseThreshold->setMaximumSize(QSize(50, 16777215));
        collapseFileNames = new QListWidget(collapse);
        collapseFileNames->setObjectName("collapseFileNames");
        collapseFileNames->setGeometry(QRect(21, 54, 256, 192));
        collapseAddFile = new QPushButton(collapse);
        collapseAddFile->setObjectName("collapseAddFile");
        collapseAddFile->setGeometry(QRect(21, 11, 100, 33));
        sizePolicy1.setHeightForWidth(collapseAddFile->sizePolicy().hasHeightForWidth());
        collapseAddFile->setSizePolicy(sizePolicy1);
        collapseAddFile->setMinimumSize(QSize(100, 0));
        collapseAddFile->setFlat(false);
        collapseRemoveFile = new QPushButton(collapse);
        collapseRemoveFile->setObjectName("collapseRemoveFile");
        collapseRemoveFile->setGeometry(QRect(120, 11, 100, 33));
        sizePolicy1.setHeightForWidth(collapseRemoveFile->sizePolicy().hasHeightForWidth());
        collapseRemoveFile->setSizePolicy(sizePolicy1);
        collapseRemoveFile->setMinimumSize(QSize(100, 0));
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
        sizePolicy.setHeightForWidth(collapseReset->sizePolicy().hasHeightForWidth());
        collapseReset->setSizePolicy(sizePolicy);
        collapseReset->setMaximumSize(QSize(150, 16777215));
        collapseButton = new QPushButton(collapse);
        collapseButton->setObjectName("collapseButton");
        collapseButton->setGeometry(QRect(374, 160, 106, 33));
        sizePolicy.setHeightForWidth(collapseButton->sizePolicy().hasHeightForWidth());
        collapseButton->setSizePolicy(sizePolicy);
        collapseButton->setMinimumSize(QSize(0, 0));
        collapseButton->setMaximumSize(QSize(150, 16777215));
        collapseButton->setAutoFillBackground(false);
        collapseButton->setAutoDefault(false);
        collapseButton->setFlat(false);
        tabWidget->addTab(collapse, QString());
        mirror = new QWidget();
        mirror->setObjectName("mirror");
        layoutWidget_3 = new QWidget(mirror);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 10, 212, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mirrorAddFile = new QPushButton(layoutWidget_3);
        mirrorAddFile->setObjectName("mirrorAddFile");
        sizePolicy1.setHeightForWidth(mirrorAddFile->sizePolicy().hasHeightForWidth());
        mirrorAddFile->setSizePolicy(sizePolicy1);
        mirrorAddFile->setMinimumSize(QSize(100, 0));
        mirrorAddFile->setMaximumSize(QSize(100, 16777215));
        mirrorAddFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        mirrorAddFile->setFlat(false);

        horizontalLayout_2->addWidget(mirrorAddFile);

        mirrorRemoveFile = new QPushButton(layoutWidget_3);
        mirrorRemoveFile->setObjectName("mirrorRemoveFile");
        sizePolicy1.setHeightForWidth(mirrorRemoveFile->sizePolicy().hasHeightForWidth());
        mirrorRemoveFile->setSizePolicy(sizePolicy1);
        mirrorRemoveFile->setMinimumSize(QSize(100, 0));
        mirrorRemoveFile->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(mirrorRemoveFile);

        mirrorFileNames = new QListWidget(mirror);
        mirrorFileNames->setObjectName("mirrorFileNames");
        mirrorFileNames->setGeometry(QRect(10, 50, 211, 153));
        mirrorFileNames->setFrameShape(QFrame::Box);
        mirrorFileNames->setFrameShadow(QFrame::Plain);
        mirrorNameSave = new QLineEdit(mirror);
        mirrorNameSave->setObjectName("mirrorNameSave");
        mirrorNameSave->setGeometry(QRect(239, 90, 125, 21));
        mirrorNameSave->setFocusPolicy(Qt::NoFocus);
        mirrorNameSave->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mirrorNameSave->setDragEnabled(false);
        mirrorNameSave->setClearButtonEnabled(false);
        mirrorSaveAs = new QPushButton(mirror);
        mirrorSaveAs->setObjectName("mirrorSaveAs");
        mirrorSaveAs->setGeometry(QRect(238, 50, 78, 33));
        label_4 = new QLabel(mirror);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(374, 90, 18, 17));
        label_4->setAlignment(Qt::AlignCenter);
        mirrorSavePath = new QLineEdit(mirror);
        mirrorSavePath->setObjectName("mirrorSavePath");
        mirrorSavePath->setGeometry(QRect(400, 90, 125, 21));
        mirrorSavePath->setFocusPolicy(Qt::NoFocus);
        mirrorReset = new QPushButton(mirror);
        mirrorReset->setObjectName("mirrorReset");
        mirrorReset->setGeometry(QRect(237, 120, 61, 33));
        sizePolicy.setHeightForWidth(mirrorReset->sizePolicy().hasHeightForWidth());
        mirrorReset->setSizePolicy(sizePolicy);
        mirrorReset->setMaximumSize(QSize(150, 16777215));
        mirrorButton = new QPushButton(mirror);
        mirrorButton->setObjectName("mirrorButton");
        mirrorButton->setGeometry(QRect(320, 120, 106, 33));
        sizePolicy.setHeightForWidth(mirrorButton->sizePolicy().hasHeightForWidth());
        mirrorButton->setSizePolicy(sizePolicy);
        mirrorButton->setMinimumSize(QSize(0, 0));
        mirrorButton->setMaximumSize(QSize(150, 16777215));
        mirrorButton->setAutoFillBackground(false);
        mirrorButton->setAutoDefault(false);
        mirrorButton->setFlat(false);
        tabWidget->addTab(mirror, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        mergeButton->setDefault(false);
        mergeAddFile->setDefault(false);
        collapseAddFile->setDefault(false);
        collapseButton->setDefault(false);
        mirrorAddFile->setDefault(false);
        mirrorButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mainHeader1->setText(QCoreApplication::translate("MainWindow", "ROBOT ", nullptr));
        mergeReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        mergeSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        mergeNameSave->setText(QString());
        mergeNameSave->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        mergeButton->setText(QCoreApplication::translate("MainWindow", "Merge Files", nullptr));
        mergeAddFile->setText(QCoreApplication::translate("MainWindow", "Add Files", nullptr));
        mergeRemoveFile->setText(QCoreApplication::translate("MainWindow", "Remove Files", nullptr));
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
        mirrorNameSave->setText(QString());
        mirrorNameSave->setPlaceholderText(QString());
        mirrorSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        mirrorReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        mirrorButton->setText(QCoreApplication::translate("MainWindow", "Collapse File", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mirror), QCoreApplication::translate("MainWindow", "Mirror", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

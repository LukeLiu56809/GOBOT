QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../Functions/Collapse/collapse.cpp \
    ../Functions/Convert/convert.cpp \
    ../Functions/Diff/diff.cpp \
    ../Functions/Expand/expand.cpp \
    ../Functions/Export/export.cpp \
    ../Functions/Extract/extract.cpp \
    ../Functions/Filter/filter.cpp \
    ../Functions/Materialize/materialize.cpp \
    ../Functions/Measure/measure.cpp \
    ../Functions/Merge/merge.cpp \
    ../Functions/Mirror/mirror.cpp \
    ../Functions/Query/query.cpp \
    ../Functions/Reason/reason.cpp \
    ../Functions/Reduce/reduce.cpp \
    ../Functions/Relax/relax.cpp \
    ../Functions/Remove/remove.cpp \
    ../Functions/Rename/rename.cpp \
    ../Functions/Repair/repair.cpp \
    ../Functions/Report/report.cpp \
    ../Functions/Template/template.cpp \
    ../Functions/Unmerge/unmerge.cpp \
    ../Functions/Validate/validate.cpp \
    ../Menu/Edit/edit.cpp \
    ../Menu/Help/help.cpp \
    ../Menu/View/view.cpp \
    ../Menu/Window/window.cpp \
    ../RobotDownload/robotdownload.cpp \
    ../SplashScreen/splashscreen.cpp \
    ../Startup/startup.cpp \
    GOBOT.cpp \
    mainwindow.cpp

HEADERS += \
    ../Functions/Collapse/collapse.h \
    ../Functions/Convert/convert.h \
    ../Functions/Diff/diff.h \
    ../Functions/Expand/expand.h \
    ../Functions/Export/export.h \
    ../Functions/Extract/extract.h \
    ../Functions/Filter/filter.h \
    ../Functions/Materialize/materialize.h \
    ../Functions/Measure/measure.h \
    ../Functions/Merge/merge.h \
    ../Functions/Mirror/mirror.h \
    ../Functions/Query/query.h \
    ../Functions/Reason/reason.h \
    ../Functions/Reduce/reduce.h \
    ../Functions/Relax/relax.h \
    ../Functions/Remove/remove.h \
    ../Functions/Rename/rename.h \
    ../Functions/Repair/repair.h \
    ../Functions/Report/report.h \
    ../Functions/Template/template.h \
    ../Functions/Unmerge/unmerge.h \
    ../Functions/Validate/validate.h \
    ../Menu/Edit/edit.h \
    ../Menu/Help/help.h \
    ../Menu/View/view.h \
    ../Menu/Window/window.h \
    ../RobotDownload/robotdownload.h \
    ../SplashScreen/splashscreen.h \
    ../Startup/startup.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../SplashScreen/SplashImage.qrc

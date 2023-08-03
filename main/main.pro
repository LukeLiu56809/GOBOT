QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../Functions/Collapse/collapse.cpp \
    ../Functions/Merge/merge.cpp \
    ../Functions/Mirror/mirror.cpp \
    ../Functions/Reduce/reduce.cpp \
    ../Functions/Relax/relax.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../Functions/Collapse/collapse.h \
    ../Functions/Merge/merge.h \
    ../Functions/Mirror/mirror.h \
    ../Functions/Reduce/reduce.h \
    ../Functions/Relax/relax.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
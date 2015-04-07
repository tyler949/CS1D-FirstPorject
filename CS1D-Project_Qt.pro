#-------------------------------------------------
#
# Project created by QtCreator 2015-02-10T19:44:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1D-Project_Qt
TEMPLATE = app


SOURCES += main.cpp \
<<<<<<< HEAD
    mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

=======
    mainwindow.cpp \
    displaytrip.cpp \
    majorleaguestadiums.cpp \
    dreamvacation.cpp

HEADERS  += mainwindow.h \
    displaytrip.h \
    majorleaguestadiums.h \
    dreamvacation.h

FORMS    += mainwindow.ui \
    displaytrip.ui \
    majorleaguestadiums.ui \
    dreamvacation.ui
>>>>>>> origin/aven


DISTFILES += \
    winerytextfile.txt

RESOURCES +=

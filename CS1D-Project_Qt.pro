#-------------------------------------------------
#
# Project created by QtCreator 2015-02-10T19:44:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1D-Project_Qt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    winetype.cpp \
    wineryclass.cpp \
    propagatevector.cpp \
    viewwinerieswindow.cpp \
    planshortesttrip.cpp \
    displaytrip.cpp \
    plancustomtrip.cpp \
    tourwineries.cpp \
    shopforwine.cpp \
    plandaytrip.cpp

HEADERS  += mainwindow.h \
    winerie.h \
    wine.h \
    winetype.h \
    main.h \
    wineryclass.h \
    viewwinerieswindow.h \
    planshortesttrip.h \
    displaytrip.h \
    plancustomtrip.h \
    tourwineries.h \
    shopforwine.h \
    plandaytrip.h

FORMS    += mainwindow.ui \
    viewwinerieswindow.ui \
    planshortesttrip.ui \
    displaytrip.ui \
    plancustomtrip.ui \
    tourwineries.ui \
    shopforwine.ui \
    AdminLogin.ui \
    AdminMenu.ui \
    AdminAddWinery.ui \
    AdminAddWine.ui \
    AdminChangePrice.ui \
    plandaytrip.ui

DISTFILES += \
    winerytextfile.txt

RESOURCES +=

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
    plandaytrip.cpp \
    admenu.cpp \
    newwinery.cpp \
    addwine.cpp \
    changeprice.cpp \
    adlogin.cpp \
    purchasewines.cpp

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
    plandaytrip.h \
    admenu.h \
    newwinery.h \
    addwine.h \
    changeprice.h \
    adlogin.h \
    purchasewines.h

FORMS    += mainwindow.ui \
    viewwinerieswindow.ui \
    planshortesttrip.ui \
    displaytrip.ui \
    plancustomtrip.ui \
    tourwineries.ui \
    shopforwine.ui \
    plandaytrip.ui \
    admenu.ui \
    newwinery.ui \
    addwine.ui \
    changeprice.ui \
    adlogin.ui \
    purchasewines.ui

DISTFILES += \
    winerytextfile.txt

RESOURCES +=

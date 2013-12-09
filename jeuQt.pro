#-------------------------------------------------
#
# Project created by QtCreator 2013-11-08T12:55:06
#
#-------------------------------------------------

QT       += core gui widgets network

TARGET = jeuQt
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    emplacement.cpp \
    joueur.cpp

HEADERS  += mainwindow.h \
    emplacement.h \
    joueur.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc

TRANSLATIONS = jeuQt_fr.ts \

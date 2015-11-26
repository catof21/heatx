#-------------------------------------------------
#
# Project created by QtCreator 2015-11-26T18:05:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = heat02
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    flow.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    flow.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui

#-------------------------------------------------
#
# Project created by QtCreator 2015-11-13T15:30:27
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = heat01
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot/qcustomplot.cpp \
    flow.cpp

HEADERS  += mainwindow.h \
    qcustomplot/qcustomplot.h \
    flow.h

FORMS    += mainwindow.ui

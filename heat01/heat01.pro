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
    Flow.cpp \
    inputflow.cpp \
    flowgrid.cpp

HEADERS  += mainwindow.h \
    qcustomplot/qcustomplot.h \
    Flow.h \
    inputflow.h \
    flowgrid.h

FORMS    += mainwindow.ui \
    inputflow.ui

DISTFILES +=

#-------------------------------------------------
#
# Project created by QtCreator 2017-11-09T21:42:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pro2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sintact.cpp \
    lexico.cpp

HEADERS  += mainwindow.h \
    lexico.l \
    sintact.y \
    lexico.h \
    sintact.h \
    nodo.h

FORMS    += mainwindow.ui

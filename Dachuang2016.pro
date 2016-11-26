#-------------------------------------------------
#
# Project created by QtCreator 2016-11-21T18:21:57
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dachuang2016
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cameraframegrabber.cpp \
    picprocess.cpp

HEADERS  += mainwindow.h \
    cameraframegrabber.h \
    picprocess.h

FORMS    += mainwindow.ui

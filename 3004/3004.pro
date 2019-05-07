#-------------------------------------------------
#
# Project created by QtCreator 2019-02-09T19:29:42
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3004
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    addnonphysical.cpp \
    loginwindow.cpp \
    staffwindow.cpp \
    clientwindow.cpp \
    addclientphysicalpref.cpp \
    addclientnonphysical.cpp \
    manageclient.cpp \
    animalphyspref.cpp \
    matchwindow.cpp

HEADERS += \
    addnonphysical.h \
    loginwindow.h \
    staffwindow.h \
    clientwindow.h \
    addclientphysicalpref.h \
    addclientnonphysical.h \
    manageclient.h \
    animalphyspref.h \
    matchwindow.h

FORMS += \
    addanimalwindow.ui \
    addnonphysical.ui \
    addclient.ui \
    loginwindow.ui \
    staffwindow.ui \
    clientwindow.ui \
    addclientphysicalpref.ui \
    addclientnonphysical.ui \
    matchwindow.ui

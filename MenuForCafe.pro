TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++17
<<<<<<< HEAD
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    abstractmenuitem.cpp \
    menuitem.cpp \
    menusection.cpp

HEADERS += \
    abstractmenuitem.h \
    menuitem.h \
    menusection.h \
    abstractmenuvisitor.h
=======
QT += core gui widgets

include($$PWD/core/MenuForCafeCore.pri)

SOURCES += \
    $$PWD/main.cpp \
    $$PWD/mainwindow.cpp

HEADERS += \
    $$PWD/mainwindow.h

FORMS += \
    $$PWD/mainwindow.ui

>>>>>>> d580f1c... Moved project to my github account. Implemented start UI page, and core part for the printing menu in the console.

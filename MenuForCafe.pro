TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++17
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

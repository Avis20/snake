QT += core
QT -= gui

TARGET = Snake
CONFIG += console c++11
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    point.cpp \
    horizontalline.cpp \
    verticalline.cpp

HEADERS += \
    point.h \
    horizontalline.h \
    verticalline.h


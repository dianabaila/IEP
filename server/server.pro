QT += core
QT -= gui

CONFIG += c++11

TARGET = server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    bcm2835_stub.cpp \
    PinClass.cpp \
    pwm.cpp
#    pwm.c

HEADERS += \
    bcm2835.h \
    PinClass.h \
    pwm.h

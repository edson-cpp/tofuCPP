#-------------------------------------------------
#
# Project created by QtCreator 2017-04-15T18:09:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tofu
TEMPLATE = app


SOURCES += main.cpp\
    decvar.cpp \
    start.cpp \
    desktop.cpp \
    fcaixa.cpp \
    cadpro.cpp

HEADERS  += \
    decvar.h \
    start.h \
    desktop.h \
    fcaixa.h \
    cadpro.h

FORMS    += \
    desktop.ui \
    fcaixa.ui \
    cadpro.ui

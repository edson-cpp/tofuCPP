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
	m_principal/decvar.cpp \
	m_principal/start.cpp \
	m_principal/desktop.cpp \
	m_vendas/fcaixa.cpp \
	m_cadastros/cadpro.cpp

HEADERS  += \
	m_principal/decvar.h \
	m_principal/start.h \
	m_principal/desktop.h \
	m_vendas/fcaixa.h \
	m_cadastros/cadpro.h

FORMS    += \
	m_principal/desktop.ui \
	m_vendas/fcaixa.ui \
	m_cadastros/cadpro.ui

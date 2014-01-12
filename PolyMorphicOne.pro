#-------------------------------------------------
#
# Project created by QtCreator 2014-01-07T08:29:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PolyMorphicOne
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    BareNode.cpp \
    BareList.cpp \
    Item.cpp \
    ItemNode.cpp \
    ItemLinker.cpp \
    Box.cpp \
    BoxLinkedList.cpp \
    clickablelabel.cpp \
    BoxAvail.cpp \
    BoxTable.cpp \
    banner.cpp

HEADERS  += widget.h \
    Box.h \
    Item.h \
    BoxTable.h \
    BoxAvail.h \
    BoxLinkedList.h \
    ItemNode.h \
    ItemLinker.h \
    BareList.h \
    BareNode.h \
    clickablelabel.h \
    banner.h

FORMS    +=

OTHER_FILES += \
    Scheme.txt \
    Banner.gif

RESOURCES += \
    Resources.qrc

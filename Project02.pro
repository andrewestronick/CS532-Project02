TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    huffman.cpp \
    node.cpp \
    table.cpp

HEADERS += \
    huffman.h \
    node.h \
    table.h

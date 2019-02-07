#-------------------------------------------------
#
# Project created by QtCreator 2018-07-04T13:04:25
#
#-------------------------------------------------

QT       += core gui opengl network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = parsian-plotter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plot.cpp \
    plotterwidget.cpp \
    texturecache.cpp \
    guitimer.cpp \
    timer.cpp \
    leaffilterproxymodel.cpp \
    plotter.cpp \
    proto/cpp/messages_parsian_simurosot_data_wrapper.pb.cc \
    proto/cpp/messages_parsian_simurosot_debugs.pb.cc \
    proto/cpp/messages_parsian_simurosot_detection.pb.cc \
    proto/cpp/messages_parsian_simurosot_worldmodel.pb.cc \
    mythread.cpp

HEADERS  += mainwindow.h \
    plot.h \
    plotterwidget.h \
    texturecache.h \
    guitimer.h \
    timer.h \
    leaffilterproxymodel.h \
    plotter.h \
    proto/cpp/messages_parsian_simurosot_data_wrapper.pb.h \
    proto/cpp/messages_parsian_simurosot_debugs.pb.h \
    proto/cpp/messages_parsian_simurosot_detection.pb.h \
    proto/cpp/messages_parsian_simurosot_worldmodel.pb.h \
    mythread.h

FORMS    += \
    plotter.ui

RESOURCES +=

DISTFILES +=

MOC_DIR = objs
OBJECTS_DIR = objs

INCLUDEPATH+=proto/cpp
INCLUDEPATH+=/usr/local/Cellar/protobuf/3.6.1.3_1/include
LIBS+=-L/usr/local/Cellar/protobuf/3.6.1.3_1/lib/ -lprotobuf -lprotobuf-lite


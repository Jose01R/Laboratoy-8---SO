QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buffer.cpp \
    chargingstation.cpp \
    consumer.cpp \
    counter.cpp \
    dialogchargingstation.cpp \
    dialogcounter.cpp \
    dialogmessenger.cpp \
    dialogmutex.cpp \
    dialogprodcons.cpp \
    main.cpp \
    mainwindow.cpp \
    messenger.cpp \
    mutex.cpp \
    producer.cpp

HEADERS += \
    buffer.h \
    chargingstation.h \
    consumer.h \
    counter.h \
    dialogchargingstation.h \
    dialogcounter.h \
    dialogmessenger.h \
    dialogmutex.h \
    dialogprodcons.h \
    mainwindow.h \
    messenger.h \
    mutex.h \
    producer.h

FORMS += \
    dialogchargingstation.ui \
    dialogcounter.ui \
    dialogmessenger.ui \
    dialogmutex.ui \
    dialogprodcons.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

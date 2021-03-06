QT       += core gui
QT       += widgets
QT       += statemachine
DEFINES  += ANIMATION

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    animatedwidget.cpp \
    background.cpp \
    clyde.cpp \
    drawable.cpp \
    drawableelem.cpp \
    ennemi.cpp \
    interactive.cpp \
    main.cpp \
    movable.cpp \
    observercollision.cpp \
    notifiercollision.cpp \
    pastille.cpp \
    personnage.cpp \
    regularmove.cpp \
    exceptionbounds.cpp \
    exceptioncommand.cpp \
    mainwindow.cpp

HEADERS += \
    animatedwidget.h \
    background.h \
    clyde.h \
    consts.h \
    drawable.h \
    drawableelem.h \
    ennemi.h \
    exceptionbounds.h \
    exceptioncommand.h \
    interactive.h \
    movable.h \
    observercollision.h \
    notifiercollision.h \
    pastille.h \
    personnage.h \
    regularmove.h \
    exceptionbounds.h \
    exceptioncommand.h \
    mainwindow.h

FORMS += \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arvore.cpp \
    fila.cpp \
    filaseq.cpp \
    listaencadeada.cpp \
    listaseq.cpp \
    listasequencial.cpp \
    lse.cpp \
    main.cpp \
    mainwindow.cpp \
    no.cpp \
    pilha.cpp \
    pilhaseq.cpp

HEADERS += \
    arvore.h \
    fila.h \
    filaseq.h \
    listaencadeada.h \
    listaseq.h \
    listasequencial.h \
    lse.h \
    mainwindow.h \
    no.h \
    pilha.h \
    pilhaseq.h

FORMS += \
    arvore.ui \
    fila.ui \
    listaencadeada.ui \
    listasequencial.ui \
    mainwindow.ui \
    pilha.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

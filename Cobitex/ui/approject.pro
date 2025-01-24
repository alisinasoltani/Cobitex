QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    auth.cpp \
    btcramzarz.cpp \
    buy.cpp \
    confirmcodepage.cpp \
    forgotpasspage.cpp \
    gude.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    newpasspage.cpp \
    profile.cpp \
    signuppage.cpp \
    submitpage.cpp

HEADERS += \
    auth.h \
    btcramzarz.h \
    buy.h \
    confirmcodepage.h \
    forgotpasspage.h \
    gude.h \
    guide.h \
    loginpage.h \
    mainwindow.h \
    newpasspage.h \
    profile.h \
    signuppage.h \
    submitpage.h

FORMS += \
    auth.ui \
    btcramzarz.ui \
    buy.ui \
    confirmcodepage.ui \
    forgotpasspage.ui \
    gude.ui \
    loginpage.ui \
    mainwindow.ui \
    newpasspage.ui \
    profile.ui \
    signuppage.ui \
    submitpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    cobitex.qrc \
    sobi2.qrc

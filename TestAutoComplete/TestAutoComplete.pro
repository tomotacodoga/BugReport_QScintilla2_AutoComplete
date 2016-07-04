#-------------------------------------------------
#
# Project created by QtCreator 2016-06-09T14:58:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testwindows
TEMPLATE = app
SOURCES += main.cpp\
         mainwindow.cpp
HEADERS  += mainwindow.h

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QScintilla_gpl-2.9.2/Qt4Qt5/release/ -lqscintilla2
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QScintilla_gpl-2.9.2/Qt4Qt5/debug/ -lqscintilla2d
else:unix: LIBS += -L$$OUT_PWD/qscintilla/ -lqscintilla2

INCLUDEPATH += $$PWD/../QScintilla_gpl-2.9.2/Qt4Qt5
DEPENDPATH += $$PWD/../QScintilla_gpl-2.9.2/Qt4Qt5

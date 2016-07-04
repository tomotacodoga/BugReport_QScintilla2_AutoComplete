#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexercpp.h>
#include <Qsci/qsciapis.h>

class QsciScintilla;

class MainWindow : public QMainWindow
{
public:
     MainWindow();
private:
     QsciScintilla *textEdit;
     QsciAPIs *api;
};

#endif
#include <Qsci/qsciscintilla.h>
#include "mainwindow.h"

MainWindow::MainWindow()
{
    textEdit = new QsciScintilla;
    setCentralWidget(textEdit);

    QsciLexerCPP *lexer = new QsciLexerCPP();
    lexer->setDefaultFont(textEdit->font());
    lexer->setFoldComments(true);

    textEdit->setAutoCompletionSource(QsciScintilla::AcsAPIs);
    textEdit->setAutoCompletionThreshold(1);
    textEdit->setAutoCompletionUseSingle(QsciScintilla::AcusNever);
    textEdit->setCallTipsStyle(QsciScintilla::CallTipsContext);

    api = new QsciAPIs(lexer);

    api->add("test1?1(double,int,int) Extra info");
    api->add("test2?1(double)");
    api->add("test3?1(const char *s, int)");
    api->add("Foo::test4?1(const char *s, int)");
    api->add("Foo::test5?1(int)");
    api->add("Foo::test6?1(std::string)");
    api->prepare();
    textEdit->setLexer(lexer);
}

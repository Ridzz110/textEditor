#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFont>
#include <QFontDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class notepad; }
QT_END_NAMESPACE

class notepad : public QMainWindow
{
    Q_OBJECT

public:
    notepad(QWidget *parent = nullptr);
    ~notepad();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionCopy_triggered();

    void on_actionPrint_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    /*void on_actionBold_triggered();

    void on_actionItalic_triggered();*/

    /*void on_actionBold_triggered(bool checked);*/

    void on_actionFontStyle_triggered();

    /*void on_actionUnderline_triggered();*/
    void setFontBold(bool bold);
    void setFontUnderline(bool underline);
    void setFontItalic(bool italic);

    void on_actionpaste_triggered();

private:
    Ui::notepad *ui;
    QString currentFile = "";
};
#endif // NOTEPAD_H

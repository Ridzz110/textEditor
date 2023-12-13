#include "notepad.h"
#include "ui_notepad.h"
#include <QFont>
#include <QFontDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif // QT_CONFIG(printdialog)
#include <QPrinter>
#endif // QT_CONFIG(printer)
#endif // QT_PRINTSUPPORT_LIB

notepad::notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
#if QT_CONFIG(clipboard)
#endif
    connect(ui->actionBold, &QAction::triggered, this, &notepad::setFontBold);
    connect(ui->actionUnderline, &QAction::triggered, this, &notepad::setFontUnderline);
    connect(ui->actionItalic, &QAction::triggered, this, &notepad::setFontItalic);
}

notepad::~notepad()
{
    delete ui;
}


void notepad::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}


void notepad::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    if (fileName.isEmpty())
        return;
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}



void notepad::on_actionSave_triggered()
{
    QString fileName;
    // If we don't have a filename from before, get one.
    if (currentFile.isEmpty()) {
        fileName = QFileDialog::getSaveFileName(this, "Save");
        if (fileName.isEmpty())
            return;
        currentFile = fileName;
    } else {
        fileName = currentFile;
    }
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}


void notepad::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    if (fileName.isEmpty())
        return;
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}



void notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void notepad::on_actionPrint_triggered()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev, this);
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif // QT_CONFIG(printdialog)
    ui->textEdit->print(&printDev);
#endif // QT_CONFIG(printer)
}




void notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}




void notepad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}



void notepad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void notepad::on_actionFontStyle_triggered()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
        ui->textEdit->setFont(font);
}


/*void notepad::on_actionBold_triggered()
{

    bold? ui->textEdit->setFontWeight(QFont::Bold) :
        ui->textEdit->setFontWeight(QFont::Normal);
}


void notepad::on_actionItalic_triggered()
{
    ui->textEdit->setFontItalic();
}



void notepad::on_actionUnderline_triggered()
{
    ui->textEdit->setFontUnderline();
}*/
void notepad::setFontUnderline(bool underline)
{
    ui->textEdit->setFontUnderline(underline);
}

void notepad::setFontItalic(bool italic)
{
    ui->textEdit->setFontItalic(italic);
}

void notepad::setFontBold(bool bold)
{
    bold ? ui->textEdit->setFontWeight(QFont::Bold) :
        ui->textEdit->setFontWeight(QFont::Normal);
}


void notepad::on_actionpaste_triggered()
{
    ui->textEdit->paste();
}


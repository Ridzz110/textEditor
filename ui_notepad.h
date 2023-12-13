/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionPrint;
    QAction *actionFontStyle;
    QAction *actionpaste;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *notepad)
    {
        if (notepad->objectName().isEmpty())
            notepad->setObjectName("notepad");
        notepad->resize(800, 600);
        actionNew = new QAction(notepad);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/Icons/New.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(notepad);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/Icons/Open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(notepad);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/Icons/Save.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(notepad);
        actionSave_as->setObjectName("actionSave_as");
        actionSave_as->setIcon(icon2);
        actionCopy = new QAction(notepad);
        actionCopy->setObjectName("actionCopy");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/Icons/Copy.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionCut = new QAction(notepad);
        actionCut->setObjectName("actionCut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/Icons/Cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionUndo = new QAction(notepad);
        actionUndo->setObjectName("actionUndo");
        actionRedo = new QAction(notepad);
        actionRedo->setObjectName("actionRedo");
        actionBold = new QAction(notepad);
        actionBold->setObjectName("actionBold");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/Icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon5);
        actionItalic = new QAction(notepad);
        actionItalic->setObjectName("actionItalic");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/Icons/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon6);
        actionUnderline = new QAction(notepad);
        actionUnderline->setObjectName("actionUnderline");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/Icons/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon7);
        actionPrint = new QAction(notepad);
        actionPrint->setObjectName("actionPrint");
        actionFontStyle = new QAction(notepad);
        actionFontStyle->setObjectName("actionFontStyle");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/Icons/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFontStyle->setIcon(icon8);
        actionpaste = new QAction(notepad);
        actionpaste->setObjectName("actionpaste");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/Icons/Paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionpaste->setIcon(icon9);
        centralwidget = new QWidget(notepad);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 9, 611, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(notepad);
        statusbar->setObjectName("statusbar");
        notepad->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionpaste);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalic);
        menuFormat->addAction(actionUnderline);
        menuFormat->addAction(actionFontStyle);

        retranslateUi(notepad);

        QMetaObject::connectSlotsByName(notepad);
    } // setupUi

    void retranslateUi(QMainWindow *notepad)
    {
        notepad->setWindowTitle(QCoreApplication::translate("notepad", "notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("notepad", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("notepad", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("notepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("notepad", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("notepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("notepad", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("notepad", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("notepad", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("notepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("notepad", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("notepad", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("notepad", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("notepad", "Redo", nullptr));
        actionBold->setText(QCoreApplication::translate("notepad", "Bold", nullptr));
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("notepad", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("notepad", "Italic", nullptr));
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("notepad", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("notepad", "Underline", nullptr));
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("notepad", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("notepad", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("notepad", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFontStyle->setText(QCoreApplication::translate("notepad", "FontStyle", nullptr));
        actionpaste->setText(QCoreApplication::translate("notepad", "paste", nullptr));
#if QT_CONFIG(shortcut)
        actionpaste->setShortcut(QCoreApplication::translate("notepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("notepad", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("notepad", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notepad: public Ui_notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H

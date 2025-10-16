/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QFrame *frame;
    QPushButton *ptnProdCons;
    QPushButton *ptn_Counter;
    QPushButton *ptnMutex;
    QPushButton *ptnCarWorker;
    QPushButton *ptnMessg;
    QPushButton *ptnCharSt;
    QPushButton *btnExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 131, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(7, 60, 781, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 100, 691, 231));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        ptnProdCons = new QPushButton(frame);
        ptnProdCons->setObjectName(QString::fromUtf8("ptnProdCons"));
        ptnProdCons->setGeometry(QRect(460, 40, 181, 41));
        ptn_Counter = new QPushButton(frame);
        ptn_Counter->setObjectName(QString::fromUtf8("ptn_Counter"));
        ptn_Counter->setGeometry(QRect(250, 40, 141, 41));
        ptnMutex = new QPushButton(frame);
        ptnMutex->setObjectName(QString::fromUtf8("ptnMutex"));
        ptnMutex->setGeometry(QRect(60, 40, 141, 41));
        ptnCarWorker = new QPushButton(frame);
        ptnCarWorker->setObjectName(QString::fromUtf8("ptnCarWorker"));
        ptnCarWorker->setGeometry(QRect(250, 150, 141, 41));
        ptnMessg = new QPushButton(frame);
        ptnMessg->setObjectName(QString::fromUtf8("ptnMessg"));
        ptnMessg->setGeometry(QRect(50, 150, 151, 41));
        ptnCharSt = new QPushButton(frame);
        ptnCharSt->setObjectName(QString::fromUtf8("ptnCharSt"));
        ptnCharSt->setGeometry(QRect(460, 150, 181, 41));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(330, 380, 88, 26));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        btnExit->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btnExit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Main Window", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Laboratory 8", nullptr));
        ptnProdCons->setText(QCoreApplication::translate("MainWindow", "Producer - Consumer", nullptr));
        ptn_Counter->setText(QCoreApplication::translate("MainWindow", "Counter", nullptr));
        ptnMutex->setText(QCoreApplication::translate("MainWindow", "Mutex", nullptr));
        ptnCarWorker->setText(QCoreApplication::translate("MainWindow", "Car worker", nullptr));
        ptnMessg->setText(QCoreApplication::translate("MainWindow", "Messenger", nullptr));
        ptnCharSt->setText(QCoreApplication::translate("MainWindow", "Charging Station", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

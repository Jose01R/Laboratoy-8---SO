/********************************************************************************
** Form generated from reading UI file 'dialogcounter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOUNTER_H
#define UI_DIALOGCOUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogCounter
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *btnStart;
    QFrame *line;
    QPushButton *btnClear;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *txtInit;
    QTextEdit *txtIncrement;
    QTextEdit *txtDelay;
    QPushButton *btnInitValue;
    QPushButton *btnIncrement;
    QPushButton *btnDelay;
    QTextBrowser *textBrowser;
    QPushButton *btnStop;
    QLabel *currentValue1;

    void setupUi(QDialog *DialogCounter)
    {
        if (DialogCounter->objectName().isEmpty())
            DialogCounter->setObjectName(QString::fromUtf8("DialogCounter"));
        DialogCounter->resize(1123, 561);
        buttonBox = new QDialogButtonBox(DialogCounter);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(250, 490, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        btnStart = new QPushButton(DialogCounter);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(290, 490, 88, 31));
        line = new QFrame(DialogCounter);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 40, 1101, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        line->setFont(font);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        btnClear = new QPushButton(DialogCounter);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(400, 490, 88, 31));
        label = new QLabel(DialogCounter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 10, 211, 20));
        label->setFont(font);
        groupBox = new QGroupBox(DialogCounter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 70, 361, 211));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 66, 18));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 81, 18));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 66, 18));
        txtInit = new QTextEdit(groupBox);
        txtInit->setObjectName(QString::fromUtf8("txtInit"));
        txtInit->setGeometry(QRect(100, 30, 104, 31));
        txtIncrement = new QTextEdit(groupBox);
        txtIncrement->setObjectName(QString::fromUtf8("txtIncrement"));
        txtIncrement->setGeometry(QRect(100, 70, 104, 31));
        txtDelay = new QTextEdit(groupBox);
        txtDelay->setObjectName(QString::fromUtf8("txtDelay"));
        txtDelay->setGeometry(QRect(100, 110, 104, 31));
        btnInitValue = new QPushButton(groupBox);
        btnInitValue->setObjectName(QString::fromUtf8("btnInitValue"));
        btnInitValue->setGeometry(QRect(240, 30, 88, 26));
        btnIncrement = new QPushButton(groupBox);
        btnIncrement->setObjectName(QString::fromUtf8("btnIncrement"));
        btnIncrement->setGeometry(QRect(240, 70, 88, 26));
        btnDelay = new QPushButton(groupBox);
        btnDelay->setObjectName(QString::fromUtf8("btnDelay"));
        btnDelay->setGeometry(QRect(240, 110, 88, 26));
        textBrowser = new QTextBrowser(DialogCounter);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(450, 90, 521, 192));
        btnStop = new QPushButton(DialogCounter);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(1010, 100, 88, 26));
        currentValue1 = new QLabel(DialogCounter);
        currentValue1->setObjectName(QString::fromUtf8("currentValue1"));
        currentValue1->setGeometry(QRect(1020, 160, 66, 18));
        currentValue1->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogCounter);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogCounter, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogCounter, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogCounter);
    } // setupUi

    void retranslateUi(QDialog *DialogCounter)
    {
        DialogCounter->setWindowTitle(QCoreApplication::translate("DialogCounter", "Dialog", nullptr));
        btnStart->setText(QCoreApplication::translate("DialogCounter", "Start", nullptr));
        btnClear->setText(QCoreApplication::translate("DialogCounter", "Clear", nullptr));
        label->setText(QCoreApplication::translate("DialogCounter", "Infinite Counters", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogCounter", "Thread 1", nullptr));
        label_2->setText(QCoreApplication::translate("DialogCounter", "Init value", nullptr));
        label_3->setText(QCoreApplication::translate("DialogCounter", "Increment", nullptr));
        label_4->setText(QCoreApplication::translate("DialogCounter", "Delay", nullptr));
        btnInitValue->setText(QCoreApplication::translate("DialogCounter", "Set", nullptr));
        btnIncrement->setText(QCoreApplication::translate("DialogCounter", "Set", nullptr));
        btnDelay->setText(QCoreApplication::translate("DialogCounter", "Set", nullptr));
        btnStop->setText(QCoreApplication::translate("DialogCounter", "Stop", nullptr));
        currentValue1->setText(QCoreApplication::translate("DialogCounter", "1000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCounter: public Ui_DialogCounter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOUNTER_H

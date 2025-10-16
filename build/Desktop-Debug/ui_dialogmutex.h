/********************************************************************************
** Form generated from reading UI file 'dialogmutex.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMUTEX_H
#define UI_DIALOGMUTEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogMutex
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QPushButton *btnClear;
    QPushButton *btnStart;
    QFrame *line;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DialogMutex)
    {
        if (DialogMutex->objectName().isEmpty())
            DialogMutex->setObjectName(QString::fromUtf8("DialogMutex"));
        DialogMutex->resize(942, 497);
        buttonBox = new QDialogButtonBox(DialogMutex);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(490, 440, 91, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(DialogMutex);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 10, 61, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        btnClear = new QPushButton(DialogMutex);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(380, 450, 88, 31));
        btnStart = new QPushButton(DialogMutex);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(270, 450, 88, 31));
        line = new QFrame(DialogMutex);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 40, 941, 20));
        line->setFont(font);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(DialogMutex);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 70, 771, 351));

        retranslateUi(DialogMutex);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogMutex, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogMutex, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogMutex);
    } // setupUi

    void retranslateUi(QDialog *DialogMutex)
    {
        DialogMutex->setWindowTitle(QCoreApplication::translate("DialogMutex", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogMutex", "Mutex", nullptr));
        btnClear->setText(QCoreApplication::translate("DialogMutex", "Clear", nullptr));
        btnStart->setText(QCoreApplication::translate("DialogMutex", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMutex: public Ui_DialogMutex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMUTEX_H

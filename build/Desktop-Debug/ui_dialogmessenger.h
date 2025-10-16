/********************************************************************************
** Form generated from reading UI file 'dialogmessenger.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMESSENGER_H
#define UI_DIALOGMESSENGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogMessenger
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *DialogMessenger)
    {
        if (DialogMessenger->objectName().isEmpty())
            DialogMessenger->setObjectName(QString::fromUtf8("DialogMessenger"));
        DialogMessenger->resize(792, 665);
        buttonBox = new QDialogButtonBox(DialogMessenger);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(670, 620, 91, 32));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setInputMethodHints(Qt::ImhNone);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(DialogMessenger);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 30, 81, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        line = new QFrame(DialogMessenger);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 70, 791, 20));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        line->setFont(font1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(DialogMessenger);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogMessenger, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogMessenger, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogMessenger);
    } // setupUi

    void retranslateUi(QDialog *DialogMessenger)
    {
        DialogMessenger->setWindowTitle(QCoreApplication::translate("DialogMessenger", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogMessenger", "Messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMessenger: public Ui_DialogMessenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMESSENGER_H

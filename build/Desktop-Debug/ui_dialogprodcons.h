/********************************************************************************
** Form generated from reading UI file 'dialogprodcons.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPRODCONS_H
#define UI_DIALOGPRODCONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogProdCons
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DialogProdCons)
    {
        if (DialogProdCons->objectName().isEmpty())
            DialogProdCons->setObjectName(QString::fromUtf8("DialogProdCons"));
        DialogProdCons->resize(846, 638);
        buttonBox = new QDialogButtonBox(DialogProdCons);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(480, 580, 91, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        btnStart = new QPushButton(DialogProdCons);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(240, 580, 88, 26));
        btnStop = new QPushButton(DialogProdCons);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(360, 580, 88, 26));
        label = new QLabel(DialogProdCons);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 341, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        textBrowser = new QTextBrowser(DialogProdCons);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(95, 90, 611, 411));

        retranslateUi(DialogProdCons);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogProdCons, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogProdCons, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogProdCons);
    } // setupUi

    void retranslateUi(QDialog *DialogProdCons)
    {
        DialogProdCons->setWindowTitle(QCoreApplication::translate("DialogProdCons", "Dialog", nullptr));
        btnStart->setText(QCoreApplication::translate("DialogProdCons", "Start", nullptr));
        btnStop->setText(QCoreApplication::translate("DialogProdCons", "Stop", nullptr));
        label->setText(QCoreApplication::translate("DialogProdCons", "Producer-Consumer with condition variables", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogProdCons: public Ui_DialogProdCons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPRODCONS_H

/********************************************************************************
** Form generated from reading UI file 'dialogchargingstation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHARGINGSTATION_H
#define UI_DIALOGCHARGINGSTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogChargingStation
{
public:
    QPushButton *btnStart;
    QPushButton *btnClose;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *DialogChargingStation)
    {
        if (DialogChargingStation->objectName().isEmpty())
            DialogChargingStation->setObjectName(QString::fromUtf8("DialogChargingStation"));
        DialogChargingStation->resize(805, 685);
        btnStart = new QPushButton(DialogChargingStation);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(240, 620, 88, 26));
        btnClose = new QPushButton(DialogChargingStation);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(370, 620, 88, 26));
        textBrowser = new QTextBrowser(DialogChargingStation);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 80, 721, 391));
        label = new QLabel(DialogChargingStation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 30, 241, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(DialogChargingStation);

        QMetaObject::connectSlotsByName(DialogChargingStation);
    } // setupUi

    void retranslateUi(QDialog *DialogChargingStation)
    {
        DialogChargingStation->setWindowTitle(QCoreApplication::translate("DialogChargingStation", "Dialog", nullptr));
        btnStart->setText(QCoreApplication::translate("DialogChargingStation", "Start", nullptr));
        btnClose->setText(QCoreApplication::translate("DialogChargingStation", "Close", nullptr));
        label->setText(QCoreApplication::translate("DialogChargingStation", "Charging Station Simulator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogChargingStation: public Ui_DialogChargingStation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHARGINGSTATION_H

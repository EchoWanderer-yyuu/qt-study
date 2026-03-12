/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *ipLineEdit;
    QLineEdit *protLineEidit;
    QLineEdit *mainlineEdit;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(508, 355);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 91, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 110, 71, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 160, 71, 21));
        ipLineEdit = new QLineEdit(Widget);
        ipLineEdit->setObjectName("ipLineEdit");
        ipLineEdit->setGeometry(QRect(140, 120, 161, 21));
        protLineEidit = new QLineEdit(Widget);
        protLineEidit->setObjectName("protLineEidit");
        protLineEidit->setGeometry(QRect(140, 160, 161, 21));
        mainlineEdit = new QLineEdit(Widget);
        mainlineEdit->setObjectName("mainlineEdit");
        mainlineEdit->setGeometry(QRect(60, 220, 371, 71));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 200, 91, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\234\215\345\212\241\345\231\250</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\347\232\204\346\266\210\346\201\257\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

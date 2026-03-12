/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QPushButton *senbutton;
    QPushButton *clearbutton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(400, 300);
        senbutton = new QPushButton(Chat);
        senbutton->setObjectName("senbutton");
        senbutton->setGeometry(QRect(70, 200, 75, 23));
        clearbutton = new QPushButton(Chat);
        clearbutton->setObjectName("clearbutton");
        clearbutton->setGeometry(QRect(220, 200, 75, 23));
        label = new QLabel(Chat);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 91, 21));
        lineEdit = new QLineEdit(Chat);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 60, 361, 61));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Form", nullptr));
        senbutton->setText(QCoreApplication::translate("Chat", "\345\217\221\351\200\201", nullptr));
        clearbutton->setText(QCoreApplication::translate("Chat", "\346\270\205\347\251\272", nullptr));
        label->setText(QCoreApplication::translate("Chat", "<html><head/><body><p align=\"center\">\350\276\223\345\205\245\344\277\241\346\201\257\357\274\232</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H

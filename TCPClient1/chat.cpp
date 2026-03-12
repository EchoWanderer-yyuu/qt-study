#include "chat.h"
#include "ui_chat.h"

Chat::Chat(QTcpSocket *s, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chat)
{
    ui->setupUi(this);
    socket=s;
}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_clearbutton_clicked()
{
    ui->lineEdit->clear();
}


void Chat::on_senbutton_clicked()
{
    QByteArray ba;
    QString c=ui->lineEdit->text();
    ba.append(c.toUtf8());
    socket->write(ba);
}


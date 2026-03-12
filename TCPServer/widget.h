#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTcpServer>
#include<QTcpSocket>
#include<mythread.h>

#define PORT 8000

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void newClientHandler();
    //void clientInfoSolot();
    void threadSlot(QByteArray b);

private:
    Ui::Widget *ui;
    QTcpServer *server;   //创建服务器对象，客户端不需要创建客服端对象
};
#endif // WIDGET_H

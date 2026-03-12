#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    socket=new QTcpSocket; //创建socket对象
}

Widget::~Widget()
{
    delete ui;

    // 绑定错误信号槽函数（处理连接失败）
    connect(socket, &QTcpSocket::errorOccurred, this, &Widget::onSocketError);






}

void Widget::on_cancelButton_clicked()
{
    this->close();
}


void Widget::on_connectButton_clicked()
{

    // 获取ip地址和端口号
    QString IP = ui->iplineEdit->text().trimmed(); // 去除首尾空格
    QString portStr = ui->portlineEdit->text().trimmed();

    // 校验输入合法性
    if (IP.isEmpty() || portStr.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "IP和端口号不能为空！");
        return;
    }
    bool ok;
    quint16 port = portStr.toUShort(&ok);
    if (!ok) {
        QMessageBox::warning(this, "输入错误", "端口号必须是数字！");
        return;
    }

    // 如果socket已连接，先断开
    if (socket->state() == QAbstractSocket::ConnectedState) {
        socket->disconnectFromHost();
    }

    // 连接服务器
    socket->connectToHost(QHostAddress(IP), port);
    qDebug() << "尝试连接：" << IP << ":" << port;
    // 连接成功信号（原逻辑保留，优化lambda写法）
    connect(socket, &QTcpSocket::connected, [this]() {
        QMessageBox::information(this, "连接提示", "连接服务器成功");

        this->hide();   //隐藏主界面
        Chat *c=new Chat(socket);   //创建子窗口,创建在堆里
        c->show();
    });

    // 连接断开信号（原逻辑保留）
    connect(socket, &QTcpSocket::disconnected, [this](){
        QMessageBox::information(this, "连接提示", "连接异常，网络断开");
    });
}

// 处理socket错误的槽函数
void Widget::onSocketError(QAbstractSocket::SocketError error)
{
    // 排除"正常断开连接"的错误（避免误提示）
    if (error == QAbstractSocket::RemoteHostClosedError) {
        return;
    }
    // 显示错误信息
    QMessageBox::critical(this, "连接失败",
                          "错误原因：" + socket->errorString());
    qDebug() << "Socket错误码：" << error << "，错误信息：" << socket->errorString();
}

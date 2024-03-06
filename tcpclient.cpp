#include "tcpclient.h"
#include "ui_tcpclient.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMainWindow>

tcpclient::tcpclient(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tcpclient)
{
    this->read_config();
    ui->setupUi(this);
}


tcpclient::~tcpclient()
{
    delete ui;
}

void tcpclient::read_config() {
    QFile configFile(":/Client.config");
    if (!configFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "无法打开配置文件";
        return;
    }
    QTextStream in(&configFile);
    serverIp = in.readLine(); // 第一行是服务器IP
    serverPort = in.readLine().toInt(); // 第二行是服务器端口号
    qDebug() << "服务器IP:" << serverIp << ", 端口号:" << serverPort;
    configFile.close();
}


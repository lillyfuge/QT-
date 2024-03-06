#include "tcpclient.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    tcpclient w; // 实例化tcpclient对象
    w.show(); // 显示tcpclient窗口

    return a.exec(); // 进入应用程序的主事件循环
}

#ifndef TCPCLIENT_H
#define TCPCLIENT_H
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class tcpclient;
}
QT_END_NAMESPACE

class tcpclient : public QMainWindow
{
    Q_OBJECT

public:
    tcpclient(QWidget *parent = nullptr);
    ~tcpclient();
    void read_config();
    private:
    Ui::tcpclient *ui;
    QString serverIp;
    int serverPort;

};
#endif // TCPCLIENT_H

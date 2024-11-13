#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTcpServer>
#include<QTcpSocket>
#include <QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QMessageBox>
#include<QSqlDriver>
#include <QByteArray>
#include <QPixmap>
#include <QFile>
#include <QFileDialog>
#include"sec.h"
#include"xieyi.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void insertQuestions();
private slots:
    void accept_client();
    void recv_data();
    void disconnect_client();

    void handleRegister(QTcpSocket *clientSocket,QString a,QString b);//注册
    void handleLogin(QTcpSocket *clientSocket,QString a,QString b);
    void handlepic(QTcpSocket *clientSocket,QString a,QString b);
    void handletext(QTcpSocket *clientSocket,QString a,QString b);

private:
    Ui::Widget *ui;
    QSqlQuery* query;
    QTcpServer *server;
    QTcpSocket *socket;
};

#endif // WIDGET_H

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    main_wid=new main_widget;
    main_wid->hide();
    sec=new sec_sig;
    sec->hide();

    socket=new QTcpSocket;
    //获取服务器IP和端口
//    QString ip = "127.0.0.1";
//    QString port="9999";

    //主动与服务器建立连接
    socket->connectToHost("127.0.0.1",9999);

    connect(socket,&QTcpSocket::readyRead,this,&Widget::server_recv);
    connect(sec,&sec_sig::sec_bck,this,&Widget::show);

}

void Widget::server_recv(){
    QByteArray data=socket->readAll();
    qDebug()<<"ser_recv"<<data;

    QStringList part=QString(data).split(":");
    QString respond=part[0];
    if("REG_POND"==respond){
        if("Registration successful"==part[0]){
            QMessageBox::information(this,"登录","登陆成功");
            this->hide();
            main_wid->main_show();
        }
        else
            QMessageBox::warning(this,"错误","登录失败");

    }
}


Widget::~Widget()
{
    sec->deleteLater();
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    //QMessageBox::information(this,"登录","登陆成功");
    QString name=ui->lineEdit->text();
    QString pwd=ui->lineEdit_2->text();
    QString command="LOGIN";
    QString requestData = QString("%1:%2:%3").arg(command).arg(name).arg(pwd);
    socket->write(requestData.toUtf8());  // 发送数据到服务器
    socket->flush();
//    this->hide();
//    main_wid->main_show();

}

void Widget::on_pushButton_2_clicked()
{
    connect(this,&Widget::ready_socket,sec,&sec_sig::setsocket);
    emit ready_socket(socket);
    sec->show();
    this->hide();
}

//void Widget::on_pushButton_3_clicked()
//{
//    this->hide();
//    sec->sec_show();
//}

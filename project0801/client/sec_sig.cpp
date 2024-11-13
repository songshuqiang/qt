#include "sec_sig.h"
#include "ui_sec_sig.h"

sec_sig::sec_sig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sec_sig)
{
    ui->setupUi(this);
}

sec_sig::~sec_sig()
{
    delete ui;
}

void sec_sig::on_pushButton_clicked()//界面跳转
{
    emit sec_bck();
    this->hide();
}

void sec_sig::on_pushButton_2_clicked()//注册
{

}

void sec_sig::setsocket(QTcpSocket *socket)
{

}

void sec_sig::sec_show()
{
    this->show();
}

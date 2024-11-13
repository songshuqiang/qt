#include "hone_secel.h"
#include "ui_hone_secel.h"

hone_secel::hone_secel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hone_secel)
{
    ui->setupUi(this);
    hone_secel_tex=new hone_secel_text;
    hone_secel_tex->hide();
    connect(hone_secel_tex,&hone_secel_text::hone_secel_back,this,&hone_secel::show);
}

hone_secel::~hone_secel()
{
    delete ui;
}

void hone_secel::main_back()
{
    this->show();
}


void hone_secel::on_pushButton_5_clicked()
{
    emit main_back1();
    this->hide();
}

void hone_secel::on_pushButton_clicked()
{
    this->hide();
    hone_secel_tex->hone_secel_cack1();
}

void hone_secel::on_pushButton_2_clicked()
{
    this->hide();
    hone_secel_tex->hone_secel_cack1();
}

void hone_secel::on_pushButton_3_clicked()
{
    this->hide();
    hone_secel_tex->hone_secel_cack1();
}

void hone_secel::on_pushButton_4_clicked()
{
    this->hide();
    hone_secel_tex->hone_secel_cack1();
}

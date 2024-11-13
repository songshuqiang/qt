#include "main_widget.h"
#include "ui_main_widget.h"

main_widget::main_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_widget)
{
    ui->setupUi(this);
    hone_sec=new hone_secel;
    hone_sec->hide();
    test=new test_1;
    test->hide();
    hone_text=new hone_secel_text;
    hone_text->hide();
    connect(hone_sec,&hone_secel::main_back1,this,&main_widget::show);
    connect(test,&test_1::test_back_main,this,&main_widget::show);
    connect(hone_text,&hone_secel_text::hone_back_main,this,&main_widget::show);

}

main_widget::~main_widget()
{
    delete ui;
}

void main_widget::main_show()
{
    this->show();
}

void main_widget::on_pushButton_hone_clicked()
{
    hone_sec->show();
    this->hide();
}

void main_widget::on_pushButton_test_clicked()
{
    test->test_show();
    this->hide();
}

void main_widget::on_pushButton_error_clicked()//槽函数触发，当点击时，隐藏当前界面，显示第二节界面
{
    this->hide();
    hone_text->show();
}

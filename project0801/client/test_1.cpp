#include "test_1.h"
#include "ui_test_1.h"

test_1::test_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test_1)
{
    ui->setupUi(this);
}

test_1::~test_1()
{
    delete ui;
}

void test_1::test_show()
{
    this->show();
}


void test_1::on_pushButton_2_clicked()
{
    this->hide();
    emit test_back_main();
}

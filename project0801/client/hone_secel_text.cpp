#include "hone_secel_text.h"
#include "ui_hone_secel_text.h"

hone_secel_text::hone_secel_text(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hone_secel_text)
{
    ui->setupUi(this);

}

hone_secel_text::~hone_secel_text()
{
    delete ui;
}

void hone_secel_text::hone_secel_cack1()
{
    this->show();
}


void hone_secel_text::on_pushButton_3_clicked()
{
    this->hide();
    emit hone_secel_back();
    emit hone_back_main();
}

#include "sec.h"
#include "ui_sec.h"

sec::sec(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sec)
{
    ui->setupUi(this);
}

sec::~sec()
{
    delete ui;
}

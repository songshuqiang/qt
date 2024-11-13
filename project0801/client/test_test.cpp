#include "test_test.h"
#include "ui_test_test.h"

test_test::test_test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test_test)
{
    ui->setupUi(this);
}

test_test::~test_test()
{
    delete ui;
}

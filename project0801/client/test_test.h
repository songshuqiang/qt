#ifndef TEST_TEST_H
#define TEST_TEST_H

#include <QWidget>

namespace Ui {
class test_test;
}

class test_test : public QWidget
{
    Q_OBJECT

public:
    explicit test_test(QWidget *parent = 0);
    ~test_test();

private:
    Ui::test_test *ui;
};

#endif // TEST_TEST_H

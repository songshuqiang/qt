#ifndef TEST_1_H
#define TEST_1_H

#include <QWidget>

namespace Ui {
class test_1;
}

class test_1 : public QWidget
{
    Q_OBJECT

public:
    explicit test_1(QWidget *parent = 0);
    ~test_1();
    void test_show();
signals:
    void test_back_main();
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::test_1 *ui;
};

#endif // TEST_1_H

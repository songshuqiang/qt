#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>
#include"hone_secel.h"
#include"test_1.h"
#include"hone_secel_text.h"

namespace Ui {
class main_widget;
}

class main_widget : public QWidget
{
    Q_OBJECT

public:
    explicit main_widget(QWidget *parent = 0);
    ~main_widget();
    void main_show();

private slots:
    void on_pushButton_hone_clicked();

    void on_pushButton_test_clicked();

    void on_pushButton_error_clicked();

private:
    Ui::main_widget *ui;
    hone_secel *hone_sec;
    test_1 *test;
    hone_secel_text *hone_text;
};

#endif // MAIN_WIDGET_H

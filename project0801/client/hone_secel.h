#ifndef HONE_SECEL_H
#define HONE_SECEL_H

#include <QWidget>
#include"hone_secel_text.h"

namespace Ui {
class hone_secel;
}

class hone_secel : public QWidget
{
    Q_OBJECT

public:
    explicit hone_secel(QWidget *parent = 0);
    ~hone_secel();

    void main_back();
signals:
    void main_back1();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::hone_secel *ui;
    hone_secel_text *hone_secel_tex;
};

#endif // HONE_SECEL_H

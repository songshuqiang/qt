#ifndef HONE_SECEL_TEXT_H
#define HONE_SECEL_TEXT_H

#include <QWidget>

namespace Ui {
class hone_secel_text;
}

class hone_secel_text : public QWidget
{
    Q_OBJECT

public:
    explicit hone_secel_text(QWidget *parent = 0);
    ~hone_secel_text();
    void hone_secel_cack1();
signals:
    void hone_secel_back();//定义信号供上一界面connect
    void hone_back_main();
private slots:
    void on_pushButton_3_clicked();

private:
    Ui::hone_secel_text *ui;
};

#endif // HONE_SECEL_TEXT_H

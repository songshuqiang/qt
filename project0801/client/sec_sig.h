#ifndef SEC_SIG_H
#define SEC_SIG_H

#include <QWidget>
#include<QTcpSocket>

namespace Ui {
class sec_sig;
}

class sec_sig : public QWidget
{
    Q_OBJECT

public:
    explicit sec_sig(QWidget *parent = 0);
    ~sec_sig();
    void sec_show();
    void setsocket(QTcpSocket *socket);
signals:
    void sec_bck();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();




private:
    Ui::sec_sig *ui;
    QTcpSocket *socket;
};

#endif // SEC_SIG_H

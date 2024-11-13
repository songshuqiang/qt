#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QMessageBox>
#include<QTcpSocket>
#include<QPixmap>
#include<QFileDialog>
#include<QByteArray>
#include"sec_sig.h"
#include"main_widget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
signals:
    void ready_socket(QTcpSocket *socket);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void server_recv();

private:
    Ui::Widget *ui;
    sec_sig *sec;
    main_widget *main_wid;
    QTcpSocket *socket;
};

#endif // WIDGET_H

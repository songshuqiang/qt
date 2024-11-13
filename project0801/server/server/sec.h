#ifndef SEC_H
#define SEC_H

#include <QWidget>

namespace Ui {
class sec;
}

class sec : public QWidget
{
    Q_OBJECT

public:
    explicit sec(QWidget *parent = 0);
    ~sec();

private:
    Ui::sec *ui;
};

#endif // SEC_H

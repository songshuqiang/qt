/********************************************************************************
** Form generated from reading UI file 'sec.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEC_H
#define UI_SEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sec
{
public:
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QWidget *sec)
    {
        if (sec->objectName().isEmpty())
            sec->setObjectName(QStringLiteral("sec"));
        sec->resize(523, 412);
        listWidget = new QListWidget(sec);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 70, 351, 211));
        label = new QLabel(sec);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 171, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        retranslateUi(sec);

        QMetaObject::connectSlotsByName(sec);
    } // setupUi

    void retranslateUi(QWidget *sec)
    {
        sec->setWindowTitle(QApplication::translate("sec", "Form", nullptr));
        label->setText(QApplication::translate("sec", "\350\277\236\346\216\245\347\232\204\345\256\242\346\210\267\347\253\257\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sec: public Ui_sec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEC_H

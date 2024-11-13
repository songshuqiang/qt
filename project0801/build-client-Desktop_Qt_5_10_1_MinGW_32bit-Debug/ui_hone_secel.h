/********************************************************************************
** Form generated from reading UI file 'hone_secel.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HONE_SECEL_H
#define UI_HONE_SECEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hone_secel
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *hone_secel)
    {
        if (hone_secel->objectName().isEmpty())
            hone_secel->setObjectName(QStringLiteral("hone_secel"));
        hone_secel->resize(493, 391);
        pushButton = new QPushButton(hone_secel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 170, 93, 28));
        pushButton_2 = new QPushButton(hone_secel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 210, 93, 28));
        pushButton_3 = new QPushButton(hone_secel);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 250, 93, 28));
        pushButton_4 = new QPushButton(hone_secel);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 290, 93, 28));
        pushButton_5 = new QPushButton(hone_secel);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(290, 320, 93, 28));

        retranslateUi(hone_secel);

        QMetaObject::connectSlotsByName(hone_secel);
    } // setupUi

    void retranslateUi(QWidget *hone_secel)
    {
        hone_secel->setWindowTitle(QApplication::translate("hone_secel", "Form", nullptr));
        pushButton->setText(QApplication::translate("hone_secel", "\346\226\207\345\255\227\347\261\273", nullptr));
        pushButton_2->setText(QApplication::translate("hone_secel", "\345\233\276\347\211\207\347\261\273", nullptr));
        pushButton_3->setText(QApplication::translate("hone_secel", "\351\200\211\346\213\251\351\242\230", nullptr));
        pushButton_4->setText(QApplication::translate("hone_secel", "\345\210\244\346\226\255\351\242\230", nullptr));
        pushButton_5->setText(QApplication::translate("hone_secel", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hone_secel: public Ui_hone_secel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HONE_SECEL_H

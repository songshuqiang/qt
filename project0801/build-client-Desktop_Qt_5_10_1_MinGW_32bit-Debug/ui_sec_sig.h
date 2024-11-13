/********************************************************************************
** Form generated from reading UI file 'sec_sig.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEC_SIG_H
#define UI_SEC_SIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sec_sig
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *sec_sig)
    {
        if (sec_sig->objectName().isEmpty())
            sec_sig->setObjectName(QStringLiteral("sec_sig"));
        sec_sig->resize(524, 344);
        pushButton = new QPushButton(sec_sig);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 300, 93, 28));
        label = new QLabel(sec_sig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 70, 71, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(sec_sig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 140, 71, 61));
        label_2->setFont(font);
        lineEdit = new QLineEdit(sec_sig);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 90, 113, 21));
        lineEdit_2 = new QLineEdit(sec_sig);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 170, 113, 21));
        pushButton_2 = new QPushButton(sec_sig);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 310, 93, 28));

        retranslateUi(sec_sig);

        QMetaObject::connectSlotsByName(sec_sig);
    } // setupUi

    void retranslateUi(QWidget *sec_sig)
    {
        sec_sig->setWindowTitle(QApplication::translate("sec_sig", "Form", nullptr));
        pushButton->setText(QApplication::translate("sec_sig", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("sec_sig", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("sec_sig", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("sec_sig", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sec_sig: public Ui_sec_sig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEC_SIG_H

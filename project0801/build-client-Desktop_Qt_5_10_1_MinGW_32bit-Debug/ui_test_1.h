/********************************************************************************
** Form generated from reading UI file 'test_1.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_1_H
#define UI_TEST_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_1
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *test_1)
    {
        if (test_1->objectName().isEmpty())
            test_1->setObjectName(QStringLiteral("test_1"));
        test_1->resize(400, 300);
        label = new QLabel(test_1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 60, 72, 15));
        textEdit = new QTextEdit(test_1);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 90, 341, 91));
        checkBox = new QCheckBox(test_1);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(140, 190, 91, 19));
        pushButton = new QPushButton(test_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 230, 121, 28));
        pushButton_2 = new QPushButton(test_1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 10, 93, 28));

        retranslateUi(test_1);

        QMetaObject::connectSlotsByName(test_1);
    } // setupUi

    void retranslateUi(QWidget *test_1)
    {
        test_1->setWindowTitle(QApplication::translate("test_1", "Form", nullptr));
        label->setText(QApplication::translate("test_1", "\350\200\203\350\257\225\351\241\273\347\237\245", nullptr));
        textEdit->setHtml(QApplication::translate("test_1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4\343\200\201</p></body></html>", nullptr));
        checkBox->setText(QApplication::translate("test_1", "CheckBox", nullptr));
        pushButton->setText(QApplication::translate("test_1", "\345\274\200\345\247\213\350\200\203\350\257\225", nullptr));
        pushButton_2->setText(QApplication::translate("test_1", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test_1: public Ui_test_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_1_H

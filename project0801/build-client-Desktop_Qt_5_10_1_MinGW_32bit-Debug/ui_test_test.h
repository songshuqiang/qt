/********************************************************************************
** Form generated from reading UI file 'test_test.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_TEST_H
#define UI_TEST_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_test
{
public:
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label;
    QWidget *page_2;

    void setupUi(QWidget *test_test)
    {
        if (test_test->objectName().isEmpty())
            test_test->setObjectName(QStringLiteral("test_test"));
        test_test->resize(544, 369);
        pushButton = new QPushButton(test_test);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 320, 93, 28));
        lcdNumber = new QLCDNumber(test_test);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(420, 20, 64, 23));
        label_2 = new QLabel(test_test);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 30, 72, 15));
        stackedWidget = new QStackedWidget(test_test);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, 90, 451, 221));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 20, 261, 181));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 127);"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 50, 115, 19));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 90, 115, 19));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 120, 115, 19));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(0, 150, 115, 19));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 30, 91, 161));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 127);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(test_test);

        QMetaObject::connectSlotsByName(test_test);
    } // setupUi

    void retranslateUi(QWidget *test_test)
    {
        test_test->setWindowTitle(QApplication::translate("test_test", "Form", nullptr));
        pushButton->setText(QApplication::translate("test_test", "\346\217\220\344\272\244", nullptr));
        label_2->setText(QApplication::translate("test_test", "\345\200\222\350\256\241\346\227\266\357\274\232", nullptr));
        groupBox->setTitle(QApplication::translate("test_test", "GroupBox", nullptr));
        radioButton->setText(QApplication::translate("test_test", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("test_test", "RadioButton", nullptr));
        radioButton_3->setText(QApplication::translate("test_test", "RadioButton", nullptr));
        radioButton_4->setText(QApplication::translate("test_test", "RadioButton", nullptr));
        label->setText(QApplication::translate("test_test", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test_test: public Ui_test_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_TEST_H

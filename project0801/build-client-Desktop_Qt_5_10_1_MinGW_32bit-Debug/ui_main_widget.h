/********************************************************************************
** Form generated from reading UI file 'main_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WIDGET_H
#define UI_MAIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_widget
{
public:
    QPushButton *pushButton_hone;
    QPushButton *pushButton_test;
    QPushButton *pushButton_error;

    void setupUi(QWidget *main_widget)
    {
        if (main_widget->objectName().isEmpty())
            main_widget->setObjectName(QStringLiteral("main_widget"));
        main_widget->resize(762, 572);
        pushButton_hone = new QPushButton(main_widget);
        pushButton_hone->setObjectName(QStringLiteral("pushButton_hone"));
        pushButton_hone->setGeometry(QRect(280, 207, 161, 101));
        QFont font;
        font.setPointSize(20);
        pushButton_hone->setFont(font);
        pushButton_test = new QPushButton(main_widget);
        pushButton_test->setObjectName(QStringLiteral("pushButton_test"));
        pushButton_test->setGeometry(QRect(280, 330, 161, 71));
        pushButton_test->setFont(font);
        pushButton_error = new QPushButton(main_widget);
        pushButton_error->setObjectName(QStringLiteral("pushButton_error"));
        pushButton_error->setGeometry(QRect(280, 410, 161, 91));
        pushButton_error->setFont(font);

        retranslateUi(main_widget);

        QMetaObject::connectSlotsByName(main_widget);
    } // setupUi

    void retranslateUi(QWidget *main_widget)
    {
        main_widget->setWindowTitle(QApplication::translate("main_widget", "Form", nullptr));
        pushButton_hone->setText(QApplication::translate("main_widget", "\344\270\223\351\241\271\350\256\255\347\273\203", nullptr));
        pushButton_test->setText(QApplication::translate("main_widget", "\346\250\241\346\213\237\350\200\203\350\257\225", nullptr));
        pushButton_error->setText(QApplication::translate("main_widget", "\351\224\231\351\242\230\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_widget: public Ui_main_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WIDGET_H

/********************************************************************************
** Form generated from reading UI file 'grekorim.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREKORIM_H
#define UI_GREKORIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GrekoRim
{
public:
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *GrekoRim)
    {
        if (GrekoRim->objectName().isEmpty())
            GrekoRim->setObjectName(QString::fromUtf8("GrekoRim"));
        GrekoRim->resize(1208, 672);
        listWidget = new QListWidget(GrekoRim);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(600, 100, 381, 311));
        lineEdit = new QLineEdit(GrekoRim);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 170, 113, 21));
        pushButton = new QPushButton(GrekoRim);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 240, 80, 21));
        pushButton_2 = new QPushButton(GrekoRim);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 280, 80, 21));

        retranslateUi(GrekoRim);

        QMetaObject::connectSlotsByName(GrekoRim);
    } // setupUi

    void retranslateUi(QDialog *GrekoRim)
    {
        GrekoRim->setWindowTitle(QApplication::translate("GrekoRim", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("GrekoRim", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("GrekoRim", "\320\227\320\260\320\262\320\265\321\200\320\270\321\210\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GrekoRim: public Ui_GrekoRim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GREKORIM_H

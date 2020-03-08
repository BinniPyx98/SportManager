/********************************************************************************
** Form generated from reading UI file 'registr.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTR_H
#define UI_REGISTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registr
{
public:
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_Country;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_surname;
    QLineEdit *lineEdit_Pass;
    QLineEdit *lineEdit_repeatPass;
    QLineEdit *lineEdit_mail;

    void setupUi(QDialog *registr)
    {
        if (registr->objectName().isEmpty())
            registr->setObjectName(QString::fromUtf8("registr"));
        registr->resize(573, 690);
        line = new QFrame(registr);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(269, 10, 31, 681));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(registr);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 80, 261, 21));
        pushButton_2 = new QPushButton(registr);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 80, 261, 21));
        label = new QLabel(registr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 291, 31));
        line_2 = new QFrame(registr);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 105, 231, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(registr);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(320, 100, 231, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(registr);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 110, 47, 13));
        label_3 = new QLabel(registr);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(26, 139, 521, 51));
        pushButton_3 = new QPushButton(registr);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 380, 80, 21));
        pushButton_4 = new QPushButton(registr);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(390, 380, 80, 21));
        lineEdit = new QLineEdit(registr);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 410, 231, 31));
        lineEdit_2 = new QLineEdit(registr);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 410, 231, 31));
        lineEdit_Country = new QLineEdit(registr);
        lineEdit_Country->setObjectName(QString::fromUtf8("lineEdit_Country"));
        lineEdit_Country->setGeometry(QRect(20, 220, 531, 31));
        lineEdit_Name = new QLineEdit(registr);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setGeometry(QRect(20, 260, 251, 31));
        lineEdit_surname = new QLineEdit(registr);
        lineEdit_surname->setObjectName(QString::fromUtf8("lineEdit_surname"));
        lineEdit_surname->setGeometry(QRect(300, 260, 251, 31));
        lineEdit_Pass = new QLineEdit(registr);
        lineEdit_Pass->setObjectName(QString::fromUtf8("lineEdit_Pass"));
        lineEdit_Pass->setGeometry(QRect(20, 300, 531, 31));
        lineEdit_repeatPass = new QLineEdit(registr);
        lineEdit_repeatPass->setObjectName(QString::fromUtf8("lineEdit_repeatPass"));
        lineEdit_repeatPass->setGeometry(QRect(20, 340, 531, 31));
        lineEdit_mail = new QLineEdit(registr);
        lineEdit_mail->setObjectName(QString::fromUtf8("lineEdit_mail"));
        lineEdit_mail->setGeometry(QRect(20, 180, 531, 31));

        retranslateUi(registr);

        QMetaObject::connectSlotsByName(registr);
    } // setupUi

    void retranslateUi(QDialog *registr)
    {
        registr->setWindowTitle(QApplication::translate("registr", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("registr", "\320\262\320\272", nullptr));
        pushButton_2->setText(QApplication::translate("registr", "\321\204\321\215\320\271\321\201", nullptr));
        label->setText(QApplication::translate("registr", "                                 \320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        label_2->setText(QApplication::translate("registr", "     \320\230\320\273\320\270", nullptr));
        label_3->setText(QApplication::translate("registr", "TextLabel", nullptr));
        pushButton_3->setText(QApplication::translate("registr", "Create", nullptr));
        pushButton_4->setText(QApplication::translate("registr", "\320\243\320\266\320\265 \320\265\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registr: public Ui_registr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTR_H

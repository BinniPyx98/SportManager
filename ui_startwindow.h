/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_4;
    QLineEdit *lineEditLogin;
    QLabel *label_3;
    QLineEdit *lineEditPass;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QFrame *line;
    QPushButton *pb_exit;
    QPushButton *pb_hide;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName(QString::fromUtf8("StartWindow"));
        StartWindow->resize(350, 505);
        StartWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-image: url (\":/1.png\");\n"
"\n"
"}"));
        centralwidget = new QWidget(StartWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 370, 191, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(9);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(245, 245, 245);\n"
"background-color: rgb(97, 97, 97);"));
        lineEditLogin = new QLineEdit(centralwidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setGeometry(QRect(20, 200, 311, 31));
        lineEditLogin->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid rgb( 192, 192, 192);\n"
" border-radius: 3px; \n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 370, 101, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(245, 245, 245);"));
        lineEditPass = new QLineEdit(centralwidget);
        lineEditPass->setObjectName(QString::fromUtf8("lineEditPass"));
        lineEditPass->setGeometry(QRect(20, 240, 311, 31));
        lineEditPass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-image:url(\":/22.jpg\" );\n"
"border: 1px solid rgb( 192, 192, 192);\n"
" border-radius: 3px; \n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 400, 191, 23));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(245, 245, 245);\n"
"background-color: rgb(97, 97, 97);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 310, 311, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"border: 1px solid rgb(65, 105, 225 );\n"
" border-radius: 3px; \n"
"}\n"
"QPushButton:hover{\n"
"}\n"
""));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 280, 81, 17));
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(245, 245, 245);\n"
""));
        checkBox->setTristate(false);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 350, 471, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pb_exit = new QPushButton(centralwidget);
        pb_exit->setObjectName(QString::fromUtf8("pb_exit"));
        pb_exit->setGeometry(QRect(330, 10, 21, 21));
        pb_hide = new QPushButton(centralwidget);
        pb_hide->setObjectName(QString::fromUtf8("pb_hide"));
        pb_hide->setGeometry(QRect(310, 10, 21, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 211, 101));
        StartWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StartWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 20));
        StartWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StartWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StartWindow->setStatusBar(statusbar);

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartWindow)
    {
        StartWindow->setWindowTitle(QApplication::translate("StartWindow", "StartWindow", nullptr));
        pushButton_4->setText(QApplication::translate("StartWindow", "\320\235\320\225 \320\234\320\236\320\223\320\243 \320\222\320\236\320\231\320\242\320\230 \320\222 \320\220\320\232\320\232\320\220\320\243\320\235\320\242", nullptr));
        label_3->setText(QApplication::translate("StartWindow", "\320\235\320\265 \320\274\320\276\320\266\320\265\321\202\320\265 \320\262\320\276\320\271\321\202\320\270?", nullptr));
        pushButton_5->setText(QApplication::translate("StartWindow", "\320\241\320\236\320\227\320\224\320\220\320\242\320\254 \320\235\320\236\320\222\320\253\320\231 \320\220\320\232\320\232\320\220\320\243\320\235\320\242", nullptr));
        pushButton_2->setText(QApplication::translate("StartWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        checkBox->setText(QApplication::translate("StartWindow", "\320\227\320\260\320\277\320\276\320\274\320\275\320\270\321\202\321\214", nullptr));
        pb_exit->setText(QString());
        pb_hide->setText(QString());
        label->setText(QApplication::translate("StartWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H

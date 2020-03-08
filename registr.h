#pragma once

#ifndef REGISTR_H
#define REGISTR_H
#include "QSqlDatabase"
#include <QDialog>

namespace Ui {
class DbConnect;
class registr;
}

class DbConnect{
public:
    QSqlDatabase db;
public:
    void connect(){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setDatabaseName("users");
        db.setUserName("root");
        db.setPassword("");
        db.open();
    }
};

class registr : public QDialog
{
    Q_OBJECT

public:
    explicit registr(QWidget *parent = nullptr);
    ~registr();

private slots:
    void on_pushButton_3_clicked();



private:
    Ui::registr *ui;
};

#endif // REGISTR_H

#ifndef GREKORIM_H
#define GREKORIM_H

#include <QDialog>

namespace Ui {
class GrekoRim;
}

class GrekoRim : public QDialog
{
    Q_OBJECT

public:
    explicit GrekoRim(QWidget *parent = nullptr);
    ~GrekoRim();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::GrekoRim *ui;
};

#endif // GREKORIM_H

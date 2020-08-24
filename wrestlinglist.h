#ifndef WRESTLINGLIST_H
#define WRESTLINGLIST_H

#include <QWidget>

namespace Ui {
class WrestlingList;
}

class WrestlingList : public QWidget
{
    Q_OBJECT

public:
    explicit WrestlingList(QWidget *parent = nullptr);
    ~WrestlingList();

private:
    Ui::WrestlingList *ui;
};

#endif // WRESTLINGLIST_H

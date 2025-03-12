#pragma once
#include <QLineEdit>

class Counter : public QLineEdit
{
    Q_OBJECT
  public:
  public:
    Counter(const QString &content, QWidget *parent) : QLineEdit(content, parent){};
  signals:
    void tick_signal();
  public slots:
    void add_one()
    {
        QString str = text();
        int r = str.toInt();
        if (r != 0 && r % 5 == 0)
            emit tick_signal();
        r++;
        str.setNum(r);
        setText(str);
    }
};


#pragma once
#include <QWidget>
#include "Figure.h"

class Area : public QWidget
{
    int myTimer;
    float alpha;
  public:
    Area(QWidget *parent = nullptr);
    ~Area();
    MyLine *myline;
    MyRect *myrect;

  protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};


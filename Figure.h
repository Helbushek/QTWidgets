#pragma once
#include <QPainter>

class Figure
{
  protected:
    int x, y, halflen, dx, dy, r;
    virtual void draw(QPainter *Painter) = 0;
  public:
    Figure(int x, int y, int halflen) : x(x), y(y), halflen(halflen){};
    void move(float Alpha, QPainter *Painter);
};

class MyLine : public Figure
{
  protected:
    void draw(QPainter *Painter);

  public:
    MyLine(int x, int y, int halflen) : Figure(x, y, halflen){};
};

class MyRect : public Figure
{
  protected:
    void draw(QPainter *Painter);

  public:
    MyRect(int x, int y, int halflen) : Figure(x, y, halflen){};
};


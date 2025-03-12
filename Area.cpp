#include "Area.h"
#include "qcoreevent.h"

Area::Area(QWidget *parent) :QWidget(parent)
{
    setFixedSize(QSize(300, 200));
    myline = new MyLine(80, 100, 50);
    myrect = new MyRect(220, 100, 50);
    alpha = 0;
}

void Area::showEvent(QShowEvent *event)
{
    myTimer = startTimer(50);
}

void Area::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::red);
    myline->move(alpha, &painter);
    myrect->move(alpha * (-0.5f), &painter);
}

void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer)
    {
        alpha += 0.2f;
        update();
    }
    else
        QWidget::timerEvent(event);
}

void Area::hideEvent(QHideEvent *event)
{
    killTimer(myTimer);
}

Area::~Area()
{
    delete myline;
    delete myrect;
}

#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>

#include "Area.h"


    class MainWindow : public QMainWindow
{
    Q_OBJECT
  protected:
    Area *area;
    QPushButton *btn;
    QWidget *centralWidget;
  public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

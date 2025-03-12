#pragma once

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QWidget>

#include "Counter.h"

QT_BEGIN_NAMESPACE
    namespace Ui { class MainWindow; }
QT_END_NAMESPACE

    class MainWindow : public QMainWindow
{
    Q_OBJECT
  protected:
    QLabel *label1, *label2;
    Counter *counter1, *counter2;
    QPushButton *calcbutton;
    QPushButton *exitbutton;
    QWidget *centralWidget;

  public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

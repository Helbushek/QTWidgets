#include "MainWindow.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle(QString("Счётчик"));
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    label1 = new QLabel(QString("Счетчик по 1"), centralWidget);
    label2 = new QLabel(QString("Счетчик по 5"), centralWidget);
    counter1 = new Counter(QString("0"), centralWidget);
    counter2 = new Counter(QString("0"), centralWidget);
    calcbutton = new QPushButton(QString("+1"), centralWidget);
    exitbutton = new QPushButton(QString("Выход"), centralWidget);

    QHBoxLayout *layout1 = new QHBoxLayout();
    layout1->addWidget(label1);
    layout1->addWidget(label2);

    QHBoxLayout *layout2 = new QHBoxLayout();
    layout2->addWidget(counter1);
    layout2->addWidget(counter2);

    QHBoxLayout *layout3 = new QHBoxLayout();
    layout3->addWidget(calcbutton);
    layout3->addWidget(exitbutton);

    QVBoxLayout *vLayout = new QVBoxLayout(centralWidget);
    vLayout->addLayout(layout1);
    vLayout->addLayout(layout2);
    vLayout->addLayout(layout3);

    centralWidget->setLayout(vLayout);

    connect(calcbutton, &QPushButton::clicked, counter1, &Counter::add_one);
    connect(counter1, &Counter::tick_signal, counter2, &Counter::add_one);
    connect(exitbutton, &QPushButton::clicked, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{

}


#include "MainWindow.h"

#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle(QString("Обработка событий"));
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    area = new Area(centralWidget);
    btn = new QPushButton(QString("Завершить"), centralWidget);
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(area);
    layout->addWidget(btn);
    connect(btn, &QPushButton::clicked, this, &QMainWindow::close);
}

MainWindow::~MainWindow()
{
}


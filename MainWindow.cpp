#include "MainWindow.h"
#include "StrValidator.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    codec = QTextCodec::codecForName("Windows-1251");

    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    setWindowTitle(QString("Возведение в квадрат"));

    frame = new QFrame(centralWidget);
    frame->setFrameShadow(QFrame::Raised);
    frame->setFrameShape(QFrame::Panel);

    inputLabel = new QLabel(QString("Введите число:"), frame);
    inputEdit = new QLineEdit("", frame);

    StrValidator *v = new StrValidator(inputLabel);
    inputEdit->setValidator(v);

    outputLabel = new QLabel(QString("Результат:"), frame);
    outputEdit = new QLineEdit("", frame);

    nextButton = new QPushButton(QString("Следующее"), centralWidget);
    exitButton = new QPushButton(QString("Выход"), centralWidget);

    QVBoxLayout *vLayout = new QVBoxLayout(frame);
    vLayout->addWidget(inputLabel);
    vLayout->addWidget(inputEdit);
    vLayout->addWidget(outputLabel);
    vLayout->addWidget(outputEdit);
    vLayout->addStretch();

    QVBoxLayout *vLayout2 = new QVBoxLayout();
    vLayout2->addWidget(nextButton);
    vLayout2->addWidget(exitButton);
    vLayout2->addStretch();

    QHBoxLayout *hLayout = new QHBoxLayout();
    hLayout->addWidget(frame);
    hLayout->addLayout(vLayout2);

    centralWidget->setLayout(hLayout);

    begin();

    connect(exitButton, &QPushButton::clicked, this, &MainWindow::close);
    connect(nextButton, &QPushButton::clicked, this, &MainWindow::begin);
    connect(inputEdit, &QLineEdit::returnPressed, this, &MainWindow::calc);
}

void MainWindow::begin()
{
    inputEdit->clear();
    nextButton->setEnabled(false);
    inputEdit->setEnabled(true);
    outputLabel->setVisible(false);
    outputEdit->setVisible(false);
    outputEdit->setEnabled(false);
    exitButton->setEnabled(false);
    inputEdit->setFocus();
}

void MainWindow::calc()
{
    bool ok = true;
    float r, a;
    QString str = inputEdit->text();
    a = str.toDouble(&ok);
    if (ok)
    {
        r = a * a;
        str.setNum(r);
        outputEdit->setText(str);
        inputEdit->setEnabled(false);
        outputLabel->setVisible(true);
        outputEdit->setVisible(true);
        nextButton->setDefault(true);
        nextButton->setEnabled(true);
        exitButton->setEnabled(true);
        nextButton->setFocus();
    }
    else
    {
        if (!str.isEmpty())
        {
            QMessageBox msgBox(QMessageBox::Information, QString("Возведение в квадрат"),
                               QString("Введено неверное значение"), QMessageBox::Ok);
            msgBox.exec();
        }
    }
}

MainWindow::~MainWindow()
{
}


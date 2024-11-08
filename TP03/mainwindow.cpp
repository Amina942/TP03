#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
, ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Clavier numérique");
    resize(300,300);
for (int i = 0; i < 10; ++i)
{
    QString text = QString::number(i);
    buttons[i] = new QPushButton(text, this);
}
    connect(buttons[0], SIGNAL(clicked()), this, SLOT(slot_button0()));
    connect(buttons[1], SIGNAL(clicked()), this, SLOT(slot_button1()));
    connect(buttons[2], SIGNAL(clicked()), this, SLOT(slot_button2()));
    connect(buttons[3], SIGNAL(clicked()), this, SLOT(slot_button3()));
    connect(buttons[4], SIGNAL(clicked()), this, SLOT(slot_button4()));
    connect(buttons[5], SIGNAL(clicked()), this, SLOT(slot_button5()));
    connect(buttons[6], SIGNAL(clicked()), this, SLOT(slot_button6()));
    connect(buttons[7], SIGNAL(clicked()), this, SLOT(slot_button7()));
    connect(buttons[8], SIGNAL(clicked()), this, SLOT(slot_button8()));
    connect(buttons[9], SIGNAL(clicked()), this, SLOT(slot_button9()));
    QGridLayout *layout = new QGridLayout();
    layout->setMargin(6);
    layout->setSpacing(6);
for (int i = 0; i<9; ++i)
{
    layout->addWidget(buttons[0], 3, 1);
    layout->addWidget(buttons[i+1], i / 3, i % 3);
}
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label, 4, 0, 1, 3);
    QWidget *Widget = new QWidget;
    Widget->setLayout(layout);
    setCentralWidget(Widget);
}
//--- Définition des slots ---//
void MainWindow ::slot_button0()
{
    emit digitClicked(0);
    label->setText("buttons_0");
}

void MainWindow::slot_button1()
{
    emit digitClicked(1);
    label->setText("buttons_1");
}

void MainWindow::slot_button2()
{
    emit digitClicked(2);
    label->setText("buttons_2");
}

void MainWindow::slot_button3()
{
    emit digitClicked(3);
    label->setText("buttons_3");
}

void MainWindow::slot_button4()
{
    emit digitClicked(4);
    label->setText("buttons_4");
}

void MainWindow::slot_button5()
{
    emit digitClicked(5);
    label->setText("buttons_5");
}

void MainWindow::slot_button6()
{
    emit digitClicked(6);
    label->setText("buttons_6");
}

void MainWindow::slot_button7()
{
    emit digitClicked(7);
    label->setText("buttons_7");
}

void MainWindow::slot_button8()
{
    emit digitClicked(8);
    label->setText("buttons_8");
}
    void MainWindow::slot_button9()
{
    emit digitClicked(9);
    label->setText("buttons_9");
}
    MainWindow::~MainWindow()
{
    delete ui;
}

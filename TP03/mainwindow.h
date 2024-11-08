#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPushButton *buttons[10];
    QGridLayout *Grille_boutons;
    QLabel *label = new QLabel(this);
private:
    Ui::MainWindow *ui;
signals:
    void digitClicked(int digit);
    private slots:
    void slot_button0();
    void slot_button1();
    void slot_button2();
    void slot_button3();
    void slot_button4();
    void slot_button5();
    void slot_button6();
    void slot_button7();
    void slot_button8();
    void slot_button9();
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qextserialport.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    const int init_values[6] = {95, 5, 85, 85, 80, 93};
    const int range_limits[6][2] = {{47,140},{0,90},{0,180},{0,180},{0,180},{40,93}};
    bool claw_closed = true;

private slots:
    void on_open_claw_clicked();

    void on_close_claw_clicked();

    void on_axis1_slider_valueChanged(int value);

    void on_axis2_slider_valueChanged(int value);

    void on_axis3_slider_valueChanged(int value);

    void on_axis4_slider_valueChanged(int value);

    void on_axis5_slider_valueChanged(int value);

    void on_connect_button_clicked();

    void connect_to_serial();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

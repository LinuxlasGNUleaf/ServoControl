#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_open_claw_clicked()
{
    if (claw_closed){

    }
}


void MainWindow::on_close_claw_clicked()
{

}


void MainWindow::on_axis1_slider_valueChanged(int value)
{


}


void MainWindow::on_axis2_slider_valueChanged(int value)
{

}


void MainWindow::on_axis3_slider_valueChanged(int value)
{

}


void MainWindow::on_axis4_slider_valueChanged(int value)
{

}


void MainWindow::on_axis5_slider_valueChanged(int value)
{

}


void MainWindow::on_connect_button_clicked()
{

}

void MainWindow::connect_to_serial()
{
    this->port = new QextSerialPort(ui->serial_port_box->text(), QextSerialPort::EventDriven);
    port->setBaudRate(BAUD9600);
    port->setFlowControl(FLOW_OFF);
    port->setParity(PAR_NONE);
    port->setDataBits(DATA_8);
    port->setStopBits(STOP_2);
    if (port->open(QIODevice::ReadWrite) == true) {
        ui->serial_status->setText("Status: Connected successfully on port "+ui->serial_port_box->text());
        home_all_axis();
    } else {
        ui->serial_status->setText("Status: No open connection found on port "+ui->serial_port_box->text());
    }
}


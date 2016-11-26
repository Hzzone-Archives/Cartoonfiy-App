#include "mainwindow.h"
#include "ui_mainwindow.h"

extern QLabel* show_label;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    show_label = new QLabel();
    ui->verticalLayout->addWidget(show_label);
    CameraFrameGrabber* _cameraFrameGrabber = new CameraFrameGrabber();
}

MainWindow::~MainWindow()
{
    delete ui;
}

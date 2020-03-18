
#include "IMH_H.h"
IHM::IHM(QWidget *parent) : QMainWindow(parent){

    this->setWindowTitle("IHM");
    this->setMinimumWidth(500);
    QWidget* mainWidget = new QWidget();

    QVBoxLayout* mainLayout = new QVBoxLayout();
    this->progressBar1 = new QProgressBar();
    mainLayout->addWidget(progressBar1);
    this->slider1=new QSlider(Qt::Horizontal);

    mainLayout->addWidget(slider1);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);

    //connect(slider1, SIGNAL(signalValueChanged(int)), this, SLOT(slotSetValue(int)));

}
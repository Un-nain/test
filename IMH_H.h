//
// Created by gagna on 18/03/2020.
//

#ifndef UNTITLED_IHM_H_H
#define UNTITLED_IHM_H_H
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>
#include <QString>
#include <QVBoxLayout>


class IHM : public QMainWindow {
Q_OBJECT
public:
    IHM(QWidget* parent = nullptr);

private:
    QProgressBar* progressBar1;
    QSlider* slider1;
    int value=5;
};



#endif //UNTITLED_IHM_H_H

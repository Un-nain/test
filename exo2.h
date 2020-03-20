//
// Created by gagna on 20/03/2020.
//

#ifndef UNTITLED_EXO2_H
#define UNTITLED_EXO2_H
#include <QtWidgets>
#include <QObject>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <iostream>

class exo2 : public QMainWindow {
Q_OBJECT;
public:
    exo2(QMainWindow* fenetre = 0);

public slots:
    void changeButton();
private:
    QPushButton *b1;
    QTextEdit *e1;
    int value=0;
};

#endif //UNTITLED_EXO2_H

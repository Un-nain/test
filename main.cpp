#include <iostream>
#include <QPushButton>
#include <QVBoxLayout>
#include <QApplication>
#include "IMH_H.h"
#include "exo2.h"
int main(int argc, char **argv){
    QApplication app (argc, argv);
    std::cout << "Hello, World!" << std::endl;
    IHM *fenetre1=new IHM;
    fenetre1->show();
    exo2 *fenetre2=new exo2;
    fenetre2->show();


    return app.exec();
    return 0;
}

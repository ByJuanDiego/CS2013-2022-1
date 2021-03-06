//
// Created by Juan Diego Castro Padilla on 31/03/22.
//

#ifndef SEMANA2_ELIPSE_H
#define SEMANA2_ELIPSE_H

#include "Figura.h"

class Elipse: public Figura{
public:
    Elipse(int x, int y): Figura(x, y) {};
    Elipse(): Elipse(0, 0) {};
    void dibujar() override {cout << "Dibujando Elipse" << endl;}
};

#endif //SEMANA2_ELIPSE_H

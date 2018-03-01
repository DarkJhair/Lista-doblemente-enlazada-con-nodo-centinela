//
// Created by Jhair on 26/2/2018.
//

#ifndef EXAMENIPARCIAL_LDE_H
#define EXAMENIPARCIAL_LDE_H

#include "NodoL.h"
class LDE {
public:
    LDE();
    NodoL * top;
    NodoL * centinela;
    NodoL * front;
    int cantidad_elementos;

    void add(NodoL *);
    void delet(int );

    int maxRep();
    int maxDif();

    int getfront();
    int gettop();
};


#endif //EXAMENIPARCIAL_LDE_H

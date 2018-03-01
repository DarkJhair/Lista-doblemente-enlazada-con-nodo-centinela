//
// Created by Jhair on 26/2/2018.
//
#include <iostream>
#include "NodoL.h"
using namespace std;

NodoL::NodoL(int num) {
    this->valueN=num;
    this->anterios=NULL;
    this->siguiente=NULL;
}
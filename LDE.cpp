//
// Created by Jhair on 26/2/2018.
//
#include <iostream>
using namespace std;
#include "LDE.h"

//Constructor de la lista inicializando nodo centinela para el top y el front
LDE::LDE() {
    this->top = new NodoL(-1);
    this->front = new NodoL(-1);

}

//funcion para agregar un nodo a la lista de manera descendente
void LDE::add(NodoL * num) {
    if(top->valueN==-1){
        top=num;
        front=num;
    }else if(top->valueN < num->valueN){
        NodoL * nodo=top;
        num->siguiente=top;
        top->anterios=num;
        top=num;
    }
    else{
        NodoL *temp=top;
        while(num->valueN < top->valueN){
            temp=temp->siguiente;
        }
        num->siguiente=temp->siguiente;
        num->anterios=temp;

        temp->siguiente=num;
        cantidad_elementos++;
    };

}

//funcion para eliminar un nodo segun el valor que este tenga
void LDE::delet(int n) {
    NodoL * temp=top;
    NodoL *temp2=front;
    if(top->valueN==n && front->valueN ==n){
        delete temp;
        delete temp2;
        cantidad_elementos--;

    }else if(top->valueN==n){
        NodoL *eliminar;
        eliminar=top;
        top=eliminar->siguiente;
        top->anterios=NULL;
        delete eliminar;
         cantidad_elementos--;

    }else{
        NodoL *eliminar;
        while(temp->siguiente->valueN!=n){
            temp=temp->siguiente;
        }
        eliminar=temp->siguiente;
        eliminar->siguiente->anterios=temp;
        temp->siguiente=eliminar->siguiente;

        delete eliminar;

    }

}

//con esta funcion obtengo el ultmo elemento de la lista
int LDE::getfront() {
    return front->valueN;
}

// con esta funcion obtengo el primer elemento de la lista
int LDE::gettop() {
    return  top->valueN;
}

//esta funcion es para restar el primer y el ultimo nodo de la lista
int LDE::maxDif() {
    return gettop()-getfront();
}
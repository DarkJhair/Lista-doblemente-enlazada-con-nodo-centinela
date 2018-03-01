#include <iostream>
#include "LDE.h"
using namespace std;
int main() {
   LDE hola;

    hola.add(new NodoL(3));
    hola.delet(3);//aqui borro el umero 3 por lo tanto deja de ser el front

    // si se quita el delet ya vuelve a aparecer el 3 de fornt y la resta del max dif cambia

    //aqui agrego varios nodos mas
    hola.add(new NodoL(5));
    hola.add(new NodoL(7));
    hola.add(new NodoL(8));
    hola.add(new NodoL(13));//si cambia o pone un numero mayor el top tambien cambia

    //aqui obtengo el top y el front para el luego restarlos y sacar el resultado;
    cout<<"El top es: "<<hola.gettop()<<endl;
    cout<<"El front es:"<<hola.getfront()<<endl;

    cout<<"La resta entre top y front es: "<<hola.maxDif()<<endl;



    return 0;
}
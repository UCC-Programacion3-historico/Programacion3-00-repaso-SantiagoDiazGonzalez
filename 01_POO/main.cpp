#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <math.h>

using namespace std;

int main() {

    Cuadrado C;

    cout << "Diagonal " << C.getDiagonal() << endl;

    C.setAlto(20);
    C.setAncho(20);

    if(C.getDiagonal()==sqrt(20*20+20*20)){
        cout << "funciona la diagonal" << endl;
    }

    cout << "Ejercicio 00/01\n" << endl;
    return 0;
}
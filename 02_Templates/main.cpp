#include <iostream>
#include <string.h>
#include "Calculadora.h"

using namespace std;

int main() {

    Calculadora<int> calInt;
    Calculadora<char> calChar;
    Calculadora<float> calFloat;
    Calculadora<string> calString;

    //Calculadora de Int
    calInt.setA(4);
    calInt.setB(5);

    cout << calInt.sumar() << endl;
    cout << calInt.dividir() << endl << endl;

    //Calculadora de char
    calChar.setA(4);
    calChar.setB(5);

    cout << calChar.sumar() << endl;
    cout << calChar.dividir() << endl << endl;

    //Calculadora de float
    calFloat.setA(4);
    calFloat.setB(5);

    cout << calFloat.sumar() << endl;
    cout << calFloat.dividir() << endl << endl;

    //Calculadora de string
    calString.setA("Hola ");
    calString.setB("Mundo");

    cout << calString.sumar() << endl << endl;

    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}
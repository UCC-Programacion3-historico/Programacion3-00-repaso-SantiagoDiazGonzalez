#include "Cuadrado.h"
#include <math.h>

float Cuadrado::getDiagonal() {
    return (float) sqrt(Alto*Alto+Ancho*Ancho);
};

float Cuadrado::getPerimetro() {
    return 2*Alto+2*Alto;
}

float Cuadrado::getSuperficie() {
    return Alto*Ancho;
}
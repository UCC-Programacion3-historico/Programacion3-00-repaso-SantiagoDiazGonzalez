#include "Geometria.h"

float Geometria::getAncho() const {
    return Ancho;
}

void Geometria::setAncho(float ancho) {
    Geometria::Ancho = ancho;
}

float Geometria::getAlto() const {
    return Alto;
}

void Geometria::setAlto(float alto) {
    Geometria::Alto = alto;
}

Geometria::Geometria(float Al, float Anc){
    Alto=Al;
    Ancho=Anc;
}
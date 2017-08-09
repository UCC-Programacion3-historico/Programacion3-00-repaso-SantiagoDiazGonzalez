#include "Color.h"

#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H


class Geometria {
protected:
    float ancho;
    float alto;
    Color color;
public:
    virtual float getSuperficie();
    virtual float getPerimetro();
};


#endif //REPASO_GEOMETRIA_H

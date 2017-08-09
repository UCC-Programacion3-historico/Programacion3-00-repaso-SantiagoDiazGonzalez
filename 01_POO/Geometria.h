#include "Color.h"

#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H


class Geometria {
protected:
    float Ancho;
    float Alto;
public:
    Color Col;
    Geometria(){};
    Geometria(float, float);
    float getAncho() const;
    void setAncho(float ancho);
    float getAlto() const;
    void setAlto(float alto);
    virtual float getSuperficie()=0;
    virtual float getPerimetro()=0;
};

º
#endif //REPASO_GEOMETRIA_H

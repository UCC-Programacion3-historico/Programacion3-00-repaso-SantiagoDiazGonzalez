#include "Color.h"

uint32_t Color::getColor(){
    uint32_t tmp=0;
    tmp=Rojo*256*256;
    tmp+=Verde*256;
    tmp+=Azul;
    return tmp;
}

void Color::tenirColor(uint8_t rojo, uint8_t verde, uint8_t azul){
    this->Rojo += rojo;
    this->Verde += verde;
    this->Azul += azul;
}
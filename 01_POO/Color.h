#include <stdint.h>

#ifndef REPASO_COLOR_H
#define REPASO_COLOR_H


class Color {
private:
    uint8_t Rojo;
    uint8_t Verde;
    uint8_t Azul;
public:
    uint32_t getColor();

    void tenirColor(uint8_t Rojo, uint8_t Verde, uint8_t Azul);
};


#endif //REPASO_COLOR_H

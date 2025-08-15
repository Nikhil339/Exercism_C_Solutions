#include "resistor_color.h"

int color_code(char color){
    resistor_band_t color_value = color;
    return color_value;
}

const resistor_band_t* colors(void){
    static const resistor_band_t bands[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
    return bands;
}
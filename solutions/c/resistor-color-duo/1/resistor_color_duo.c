#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t *bands){
    return (uint16_t) 10*bands[0] + bands[1];
}
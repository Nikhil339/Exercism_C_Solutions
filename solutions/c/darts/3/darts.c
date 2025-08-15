#include "darts.h"
#include <math.h>

uint8_t score(coordinate_t pos){
    float dist = hypot(pos.x, pos.y);

    if (dist<=1.0F){
        return (uint8_t) 10;
    } else if (dist<=5.0F){
        return (uint8_t) 5;
    } else if (dist<=10.0F){
        return (uint8_t) 1;
    } else {
        return (uint8_t) 0;
    }
}
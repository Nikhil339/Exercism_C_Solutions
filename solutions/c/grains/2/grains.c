#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index){
    return (index > 0 && index < 65) ? 1ULL << (index-1) : 0;
}

uint64_t total(void){
    uint64_t result = 1ULL << 63;
    return result*2 - 1;
}
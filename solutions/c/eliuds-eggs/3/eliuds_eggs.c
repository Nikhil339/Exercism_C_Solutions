#include "eliuds_eggs.h"

unsigned int egg_count(int bits) {
    return __builtin_popcount(bits);
}

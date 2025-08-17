#include "eliuds_eggs.h"

unsigned int egg_count(int bits) {
  int count = 0;
  while (bits) {
    if (bits % 2) count++;
    bits /= 2;
  }
  return count;
}

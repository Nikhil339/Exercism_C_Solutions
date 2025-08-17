#include "eliuds_eggs.h"

unsigned int egg_count(int num){
    int binary[32] = {0};
    int *p = binary;
    while(num!=0){
        *p = num%2;
        num = num/2;
        p++;
    }

    p = binary;
    unsigned int count = 0;
    for(int i = 0; i<32; i++){
        if (p[i] == 1){
            count ++;
        }
    }

    return count;
}


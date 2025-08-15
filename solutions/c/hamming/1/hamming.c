#include "hamming.h"

int compute(const char *lhs, const char *rhs){
    int lsize = 0;
    int rsize = 0;

    for (; *lhs != '\0'; lhs++){
        lsize++;
    }

    lhs = lhs - lsize;
    
    for (; *rhs != '\0'; rhs++){
        rsize++;
    }

    rhs = rhs - rsize;
    
    int hm = 0;

    if (lsize == rsize){
        for (int i = 0; i<lsize; i++){
            if (*(lhs + i) != *(rhs + i)){
                hm++;
            }
        }
    } else {
        return -1;
    }

    return hm;
}
#include "binary.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

int convert(const char *input){
    int num = 0;
    size_t len = strlen(input);

    for (size_t i = 0; i < len; i++){
        if (input[i] == '0' || input[i] == '1'){
            num += (input[i]-'0') << (len-1-i);
        } else {
            return -1;
        }
    }

    return num;
}
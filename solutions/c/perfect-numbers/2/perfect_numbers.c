#include "perfect_numbers.h"

kind classify_number(int a){
    if (a <= 0) return ERROR;
    
    int sum = 0;
    for (int i = 1; i < a; i++){
        if (a%i == 0) sum += i;
    }

    if (sum == a) return PERFECT_NUMBER;
    if (sum > a) return ABUNDANT_NUMBER; else return DEFICIENT_NUMBER;

}
#include "perfect_numbers.h"

int classify_number(int a){
    if (a <= 0) return -1;
    
    int sum = 0;
    for (int i = 1; i < a; i++){
        if (a%i == 0) sum += i;
    }

    if (sum == a) return 1;
    if (sum > a) return 2; else return 3;

}
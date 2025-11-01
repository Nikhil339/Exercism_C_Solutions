#include "perfect_numbers.h"
#include <math.h>

kind classify_number(int a){
    int limit = sqrt(a);

    //time complexity: O(sqrt(n)) --fastest
    if (a <= 0) return ERROR;
    if (a == 1) return DEFICIENT_NUMBER;
    int sum = 1;
    for (int i = 2; i <= limit; i++){ //the proper factors of a number cannot be greater than num/2
        if (a%i == 0) {
            sum += i;
            if (i*i != a) sum += a/i;
        }
    }

    if (sum == a) return PERFECT_NUMBER;
    if (sum > a) return ABUNDANT_NUMBER; else return DEFICIENT_NUMBER;

}
#include "difference_of_squares.h"
#include <stdio.h>
#include <math.h>

unsigned int sum_of_squares(unsigned int number){
    unsigned int sum = 0;
    for (int i = 1; i<(int)number+1; i++){
        sum += pow(i, 2);
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int sum = 0;
    for (int i = 1; i<(int)number+1; i++){
        sum += i;
    }
    return pow(sum, 2);
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}

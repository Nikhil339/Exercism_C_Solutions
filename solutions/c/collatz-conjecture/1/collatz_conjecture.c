#include "collatz_conjecture.h"

int steps(int start){
    int counter = 0;

    if (start <= 0){
        return ERROR_VALUE;
    }else{
        while(start>1){
            start = start%2==0 ? start/2 : (3*start)+1;
            counter++;
        }
    }

    return counter;
}
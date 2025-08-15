#include "leap.h"

bool leap_year(int year){
    bool islp;
    
    if (year%100!=0) {
        islp = year%4==0 ? true : false;
    } else {
        islp = year%400==0 ? true : false;
    }

    return islp;
}
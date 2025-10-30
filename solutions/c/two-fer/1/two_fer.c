#include "two_fer.h"
#include <string.h>

void two_fer(char *buffer, const char *name){
    if(name == NULL){
        strcpy(buffer, "One for you, one for me.");
    } else {
        int n = strlen("One for ") + strlen(name) + strlen(", one for me") + 1;
        char p1[n];
        strcpy(p1, "One for ");
        strcat(p1, name);
        strcat(p1, ", one for me.");
        strcpy(buffer, p1);
    }
    
}
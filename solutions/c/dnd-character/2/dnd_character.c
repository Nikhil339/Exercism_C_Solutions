#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

int compareIntegers(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int ability(void){
    srand(time(NULL));
    
    int dice_roll[4] = {0};

    for (int i = 0; i < 4; i++){
        dice_roll[i] = 1 + rand() % 6;
    }

    qsort(dice_roll, 4, sizeof(int), compareIntegers);

    return dice_roll[3] + dice_roll[2] + dice_roll[1];
}

int modifier(int score){
    int modifier = floor((score - 10) / 2.0);
    return modifier;
}

dnd_character_t make_dnd_character(void){
    dnd_character_t character;
    
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = 10 + modifier(character.constitution);

    return character;
}
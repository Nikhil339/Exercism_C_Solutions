#ifndef DND_CHARACTER_H
#define DND_CHARACTER_H

typedef struct {
   int strength;
   int dexterity;
   int constitution;
   int intelligence;
   int wisdom;
   int charisma;
   int hitpoints;
} dnd_character_t;

int compareIntegers(const void *a, const void *b);
int ability(void);
int modifier(int score);
dnd_character_t make_dnd_character(void);

#endif

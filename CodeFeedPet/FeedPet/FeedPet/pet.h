#pragma once

void pet_create(char* name, int petSize);
int eat(void);
void sleep(void);
void begForFood(void);
static float foodNeeded(void);
void addFoodToBowl(float foodToAdd);
char* pet_getName();
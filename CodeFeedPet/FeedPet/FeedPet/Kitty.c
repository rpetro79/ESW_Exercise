#include <stdio.h>
#include <string.h>
#include <time.h>
#include "pet.h"

static char* pet_name;
static float food;
static int size;

void pet_create(char* petName, int petSize)
{
	food = 0;
	pet_name = petName;
	size = petSize;
}

int eat()
{
	if (foodNeeded() < food)
	{
		food -= foodNeeded();
		printf_s("Kitty eats\n");
		return 1;
	}
	else
	{
		begForFood();
		return 0;
	}
}

void sleep()
{
	int pause = CLOCKS_PER_SEC; 
	int now = clock(), then = clock();
	printf_s("Zzz..\n");
	while ((now - then) < pause)
		now = clock();
}

void begForFood()
{
	printf("Meooow\n");
}

float foodNeeded()
{
	float x = (float)size / 50;
	return x;
}

void addFoodToBowl(float foodToAdd)
{
	food += foodToAdd;
}

char* pet_getName()
{
	return pet_name;
}
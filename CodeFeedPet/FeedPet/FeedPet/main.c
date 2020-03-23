#include <stdio.h>
#include "pet.h"
#include "PetOwner.h"

void setUp()
{
	printf("What's your name?");
	char ownerName[20];
	scanf_s("%s", ownerName, sizeof(ownerName));
	petOwner_create(ownerName);

	printf("What's your pet's name?");
	char petName[20];
	scanf_s("%s", petName, sizeof(petName));

	printf("How big is your pet?");
	int size = 0;
	scanf_s("%d", &size);

	pet_create(petName, size);
}

void run()
{
	while (1)
	{
		while (eat() == 0)
		{
			feedPet();
		}
		sleep();
	}
}

int main()
{
	setUp();
	run();
}


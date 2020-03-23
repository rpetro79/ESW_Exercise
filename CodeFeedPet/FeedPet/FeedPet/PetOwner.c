#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "PetOwner.h"

static char owner_name[20];

void petOwner_create(char ownerName[20])
{
	strcpy_s(owner_name, _countof(owner_name), ownerName);
}

void feedPet()
{
	float qty=0;
	printf("%s, give %s food.", owner_name, pet_getName());
	scanf_s("%f", &qty);
	addFoodToBowl(qty);
}
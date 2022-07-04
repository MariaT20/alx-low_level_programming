#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -initialize a variable of type struct dog
 * @d: pointer to an element of type dog
 * @name: pointer to char of dog
 * @age: age of a dog
 * @owner: pointer to char for owner of dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

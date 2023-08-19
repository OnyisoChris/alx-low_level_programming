#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Error\n");
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

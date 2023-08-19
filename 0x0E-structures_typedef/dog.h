#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of owner
 */

typedef struct dog

{
	char *name;
	float age;
	char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

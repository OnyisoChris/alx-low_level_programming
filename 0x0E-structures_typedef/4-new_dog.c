#include "dog.h"
#include <stdlib.h>

/**
 * _strlength - returns length of string
 * @s: string to be evaluated
 *
 * Return: string length
 */

int _strlength(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * _strcopy - copies string
 *
 * @dest: pointer to the buffer to copy string
 * @src: string to be copied
 *
 * Return:pointer to the destinatiom
 */

char *_strcopy(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlength(name);
	length2 = _strlength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcopy(dog->name, name);
	_strcopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

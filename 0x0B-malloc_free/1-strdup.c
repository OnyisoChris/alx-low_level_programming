#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy to new memory
 * Return: pointer to memory
 */

char *_strdup(char *str)
{
	int counter = 0;
	char *copy;
	int j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		counter++;

	copy = malloc(sizeof(char) * counter + 1);

	if (copy == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		copy[j] = str[j];

	return (copy);
}

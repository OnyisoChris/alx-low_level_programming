#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: character to be stored in the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int j;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ar[j] = c;
	return (ar);
}

#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: integer to be allocated memory
 * Return: allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}

#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the area to be filled with bytes
 * @b: constant byte
 * @n: the number of bytes
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	{
		for (j = 0; j < n; j++)
		s[j] = b;
	}
	return (s);
}

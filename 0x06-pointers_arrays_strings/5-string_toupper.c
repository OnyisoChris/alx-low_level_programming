#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: Pointer
 * Return: i
 */

char *string_toupper(char *n)
{
	int j;

	j = 0;
	while (n[j] != '\0')
	{
		if (n[j] >= '0' && n[j] <= 'z')
			n[j] = n[j] - 32;
		j++;
	}
	return (n);
}

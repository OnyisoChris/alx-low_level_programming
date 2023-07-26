#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int j;

	for (j = 0; j < n && *src != '\0'; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] = '\0';
	return (dest);
}

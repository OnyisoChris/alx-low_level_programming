#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * Return: number of matched characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; s[j] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (j);
		}
	}
	return (0);
}

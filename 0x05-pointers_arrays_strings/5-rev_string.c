#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int j;
	char k;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	for (j = 0; j < count / 2; j++)
	{
		k = s[j];
		s[j] = s[count - 1 - j];
		s[count - 1 - j] = k;
	}
}

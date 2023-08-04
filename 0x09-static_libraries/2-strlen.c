#include "main.h"

/**
 * _strlen - Finds the length of a string
 * @s: string to be  counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	return (count);
}

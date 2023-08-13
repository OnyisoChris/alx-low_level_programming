#include "main.h"

/**
 * string_nconcat- concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters to be concatenated
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	unsigned int s1length = 0;
	unsigned int s2length = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		s1length++;
	for (j = 0; s2[j] != '\0'; j++)
		s2length++;

	result = malloc(sizeof(char) * (s1length + n) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
		result[j] = s1[j];

	if (n >= s2length)
	{
		for (j = 0; s2[j] != '\0'; j++)
			result[s1length + j] = s2[j];
		result[s1length + j] = '\0';
	}
	else
	{
		for (j = 0; j < n; j++)
			result[s1length + j] = s2[j];
		result[s1length + j] = '\0';
	}
	return (result);
}

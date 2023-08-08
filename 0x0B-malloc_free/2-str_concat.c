#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: pointer to new memory location
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int j;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		len_s1++;
	for (j = 0; s2[j] != '\0'; j++)
		len_s2++;
	out = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (out == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		out[j] = s1[j];
	for (j = 0; s2[j] != '\0'; j++)
		out[len_s1 + j] = s2[j];
	return (out);
}

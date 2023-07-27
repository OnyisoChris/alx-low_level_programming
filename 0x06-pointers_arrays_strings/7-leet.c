#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int j, k;
	char *arr = "aAeEoOtTlL";
	char *rep = "4433007711";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (str[j] == arr[k])
				str[j] = rep[k];
		}
	}
	return (str);
}

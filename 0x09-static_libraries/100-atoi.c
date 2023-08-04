#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 * Return: Integer n
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int m = 1;
	int n = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			m *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			n = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
			if (n == 1)
			{
				break;
			}
			i++;
	}
	j *= m;
	return (j);
}

#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int c = 0, j = 0, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (j < ac)
	{
		while (av[j][k])
		{
			c++;
			k++;
		}
		k = 0;
		j++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);

	j = 0;
	while (av[j])
	{
		while (av[j][k])
		{
			s[l] = av[j][k];
			l++;
			k++;
		}
		s[l] = '\n';

		k = 0;
		l++;
		j++;
	}
	l++;
	s[l] = '\0';
	return (s);
}

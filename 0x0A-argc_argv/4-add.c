#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, k, sum;

	sum = 0;

	for (j = 1; j < argc; j++)
	{
		k = 0;

		while (argv[j][k] != '\0')
		{
			if (!isdigit(argv[j][k]))
			{
				printf("Error\n");
				return (1);
			}
			k++;
		}
		sum = sum + atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}

#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, 1 for incorrect arguments, 2 for -ve bytes
 */

int main(int argc, char *argv[])
{
	int n_bytes, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (j = 0; j < n_bytes; j++)
	{
		if (j == n_bytes - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}

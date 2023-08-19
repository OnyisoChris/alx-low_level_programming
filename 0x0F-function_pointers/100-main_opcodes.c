#include "function_pointers.h"

/**
 * _opcodes - prints the opcodes in hexadecimal format
 * @begin: starting address of opcodes
 * @length: number of opcodes to be printed
 */

void _opcodes(const unsigned char *begin, size_t length)
{
	size_t j;

	for (j = 0; j < length; j++)
	{
		printf("%02x ", begin[j]);
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, 1 for incorrect arguments, 2 for -ve bytes
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int n_bytes = atoi(argv[1]);

	if (n_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *main_start = (unsigned char *)&main;

	_opcodes(main_start, n_bytes);

	return (0);
}

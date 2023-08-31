#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int curr;
	int j, index = 0;

	for (j = 63; j >= 0; j--)
	{
		curr = n >> j;

		if (curr & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index)
			_putchar('0');
	}
	if (!index)
		_putchar('0');
}

#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int j, k;

		for (j = 1; j <= size; j++)
		{
			for (k = 1; k <= size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}

}

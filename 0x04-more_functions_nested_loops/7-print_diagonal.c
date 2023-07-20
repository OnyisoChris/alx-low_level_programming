#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: number of time'\' is printed
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int j, k;

		for (j = 0; j < n; j++)
		{
			for (k = 0; k <= j; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int x, y, z, j, k;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (z >= 10)
			{
				j = z % 10;
				k = (z - j) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(j + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string to be printed
 * Return: 0
 */

void puts_half(char *str)
{
	int j, n, count = 0;

	for (j = 0; str[j] != '\0'; j++)
		count++;
	n = (count - 1) / 2;
	for (j = n + 1; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}

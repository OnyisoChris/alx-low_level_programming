#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to be printed
 * Return: 0
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}

#include <stdio.h>

/**
 * main - Function Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
	if ((l != 'e') & (l != 'q'))
	{
	putchar(l);
	}
	l++;
	}
	putchar('\n');
	return (0);
}

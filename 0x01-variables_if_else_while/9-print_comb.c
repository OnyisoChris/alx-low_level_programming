#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		for (dig2 = dig1; dig2 <= 9; dig2++)
		{
			putchar(dig1 + '0');
			putchar(dig2 + '0');
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

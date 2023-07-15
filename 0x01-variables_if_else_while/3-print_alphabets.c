#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	int k = 97;
	int l = 45;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	while (l <= 85)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return(0);
}

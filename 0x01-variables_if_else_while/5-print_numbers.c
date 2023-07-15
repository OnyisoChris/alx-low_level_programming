#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		printf("%d", k);
	}
	printf("\n");
	return (0);
}

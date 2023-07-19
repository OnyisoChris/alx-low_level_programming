#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int  second = 2;
	unsigned long int next;
	int n;

	printf("%lu, ", first);
	for (n = 1; n < 50; n++)
	{
		printf("%lu", second);
		next = first + second;
		first = second;
		second = next;
		if (n != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

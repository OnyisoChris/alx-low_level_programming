#include <stdio.h>
/**
 * main - Prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int limit = 4000000;
	int first = 1;
	int second = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = first + second;
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);
}

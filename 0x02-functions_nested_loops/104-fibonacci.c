#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int in;
	unsigned long num1 = 0, num2 = 1, num3;
	unsigned long num1_h1, num1_h2, num2_h1, num2_h2;
	unsigned long h1, h2;

	for (in = 0; in < 92; in++)
	{
		num3 = num1 + num2;
		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
	}
	num1_h1 = num1 / 10000000000;
	num2_h1 = num2 / 10000000000;
	num1_h2 = num1 % 10000000000;
	num2_h2 = num2 % 10000000000;
	for (in = 93; in < 99; in++)
	{
		h1 = num1_h1 + num2_h1;
		h2 = num1_h2 + num2_h2;
		if ((num1_h2 + num2_h2) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (in != 98)
			printf(", ");

		num1_h1 = num2_h1;
		num1_h2 = num2_h2;
		num2_h1 = h1;
		num2_h2 = h2;
	}
	printf("\n");
	return (0);
}

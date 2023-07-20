#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long int j;
	long int mx;
	long int k;

	j = 612852475143;
	mx = -1;

	while (j % 2 == 0)
	{
		mx = 2;
		j /= 2;
	}

	for (k = 3; k <= sqrt(j); k = k + 2)
	{
		while (j % k == 0)
		{
			mx = k;
			j = j / k;
		}
	}
	if (j > 2)
		mx = j;
	printf("%ld\n", mx);

	return (0);
}

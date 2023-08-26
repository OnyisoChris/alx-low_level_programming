#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters
 * @n: number to be computed
 *
 * Return: The sum of parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int j;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		int num = va_arg(args, int);

		sum += num;

	}

	va_end(args);
	return (sum);
}

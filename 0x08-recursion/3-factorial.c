#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: parameter to be computed
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

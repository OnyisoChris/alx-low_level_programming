#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input to be computed
 * _sqrt - calculate square root
 * @j: number for iteration
 * Return: natural square root
 */

int _sqrt(int n, int j);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int j)
{
	int sqrt = j * j;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (j);

	return (_sqrt(n, j + 1));
}

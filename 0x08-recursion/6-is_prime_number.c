#include "main.h"
#include <stdio.h>

int _prime(int n, int j);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to be computed
 *
 * Return: the prime number
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - checks for prime number
 * @n: integer to be computed
 * @j: for iteration
 *
 * Return: 1 for prime otherwise 0
 */

int _prime(int n, int j)
{
	if (n <= 1)
		return (0);

	if (n % j == 0 && j > 1)
		return (0);
	if ((n / j) < j)
		return (1);

	return (_prime(n, j + 1));
}

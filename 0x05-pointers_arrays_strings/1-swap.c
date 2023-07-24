#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: First value
 * @b: Second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}

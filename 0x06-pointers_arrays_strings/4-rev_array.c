#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; j < n--; j++)
	{
		k = a[j];
		a[j] = a[n];
		a[n] = k;
	}
}

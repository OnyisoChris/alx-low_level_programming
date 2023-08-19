#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be computed
 * @size: number of elements in the aaray
 * @cmp: pointer to function to use to compare values
 * Return: index of element in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
			{
				return (j);

			}
		}
	}

	return (-1);
}

#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to be computed
 * @size: size of the array
 * @action: pointer to the function you need to us
 * Return: pointer to iterated array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t j;

		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}

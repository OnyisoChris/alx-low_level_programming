#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: array pointer
 */

int **alloc_grid(int width, int height)
{
	int **out;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	out = malloc(sizeof(int *) * height);

	if (out == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		out[j] = malloc(sizeof(int) * width);

		if (out[j] == NULL)
		{
			free(out);
			for (k = 0; k <= height; k++)
				free(out[k]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			out[j][k] = 0;
	}
	return (out);
}

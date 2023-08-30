#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated memory for ptr
 * @new_size: new size of new memory block
 *
 * Return: pointer to newly allocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1;
	char *old_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr_1 = malloc(new_size);
	if (!ptr_1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			ptr_1[j] = old_ptr[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			ptr_1[j] = old_ptr[j];
	}

	free(ptr);
	return (ptr_1);
}

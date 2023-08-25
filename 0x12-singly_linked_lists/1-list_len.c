#include "lists.h"

/**
 * list_len - returns the number of elements in linked list
 * @h: pointer to the list
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to string to print
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t str = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		str++;

	}

	return (str);
}

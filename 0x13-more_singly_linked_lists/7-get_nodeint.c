#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t
 * @head: pointer to first element
 * @index: node index
 *
 * Return: pointer to the node or NULL if otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tmp = head;

	while (tmp && j < index)
	{
		tmp = tmp->next;
		j++;
	}

	return (tmp ? tmp : NULL);
}

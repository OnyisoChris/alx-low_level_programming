#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first element of list
 * @idx: index of the list where the new node should be added
 * @n: data to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *l_new;
	listint_t *tmp = *head;

	l_new = malloc(sizeof(listint_t));
	if (!l_new || !head)
		return (NULL);

	l_new->n = n;
	l_new->next = NULL;

	if (idx == 0)
	{
		l_new->next = *head;
		*head = l_new;

		return (l_new);
	}

	for (j = 0; tmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			l_new->next = tmp->next;
			tmp->next = l_new;
			return (l_new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}

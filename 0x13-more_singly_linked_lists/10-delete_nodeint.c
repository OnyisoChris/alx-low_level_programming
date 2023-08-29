#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: first element of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		j++;
	}

	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}

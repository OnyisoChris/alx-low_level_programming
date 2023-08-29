#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nodes;

	if (!head || !*head)
		return (0);

	nodes = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nodes);
}

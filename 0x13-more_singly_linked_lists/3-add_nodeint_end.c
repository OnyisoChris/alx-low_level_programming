#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a
 * listint_t list
 * @head: pointer to the first element
 * @n: parameters to insert in list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l_new;
	listint_t *tmp = *head;

	l_new = malloc(sizeof(listint_t));
	if (!l_new)
		return (NULL);

	l_new->n = n;
	l_new->next = NULL;

	if (*head == NULL)
	{
		*head = l_new;
		return (l_new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = l_new;

	return (l_new);
}

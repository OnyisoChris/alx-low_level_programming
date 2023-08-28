#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a
 * listint_t list
 * @head: pointer to first node of list
 * @n: data to insert in new node
 *
 * Return: the address of the new element, or
 * NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l_new;

	l_new = malloc(sizeof(listint_t));
	if (!l_new)
		return (NULL);

	l_new->n = n;
	l_new->next = *head;
	*head = l_new;

	return (l_new);
}

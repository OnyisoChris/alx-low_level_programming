#include "lists.h"

/**
 * add_node - adds a new node at the
 * beginning of a list_t list
 * @head: head of node
 * @str: pointer to string
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int j, count = 0;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	n_node->len = count;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}

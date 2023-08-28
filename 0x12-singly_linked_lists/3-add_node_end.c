#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the node
 * @str: string
 *
 * Return: new element address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *tmp;
	unsigned int j, count = 0;

	n_node = malloc(sizeof(size_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	n_node->len = count;
	n_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = n_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n_node;
	}
	return (*head);
}

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of list
 * @head: first element of list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}

#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 *@head: pointer to first node if any
 *Return: sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}

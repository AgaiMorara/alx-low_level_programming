#include "lists.h"

/**
 *print_dlistint - prints all elements of a list_t list
 *@h: head of the list
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t ans = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ans++;
	}
	return (ans);
}

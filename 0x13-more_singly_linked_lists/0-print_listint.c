#include "lists.h"

/**
 *print_listint - prints all elements of a list_t list
 *@h: head of the list
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
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

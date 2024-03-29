#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list
 *@h: pointer to the list if any
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *j = h;

	if (h == NULL)
		return (0);
	while (j->next != NULL)
	{
		i++;
		j = j->next;
	}
	return (i + 1);
}

#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: pointer to first node if any
 *@idx: index of the list where the new node should be added
 *@n: value to be inserted at given index
 *Return: address of the new node;
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trak = *h;
	dlistint_t *node;

	while (trak != NULL && idx > 0)
	{
		trak = trak->next;
		idx--;
	}
	if (trak == NULL || idx > 0)
		return (NULL);
	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	(*node).n = n;
	(*node).next = trak;
	if (trak->prev)
		(*node).prev = trak->prev;
	else
		(*node).prev = NULL;
	trak = node;
	return (trak);
}

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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = trak;

		if (trak)
			trak->prev = new_node;

		*h = new_node;
		return (new_node);
	}

	while (trak != NULL && idx > 1)
	{
		trak = trak->next;
		idx--;
	}

	if (trak == NULL)
		return (NULL);

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = trak;
	new_node->next = trak->next;

	if (trak->next)
		trak->next->prev = new_node;
	trak->next = new_node;

	return (new_node);
}

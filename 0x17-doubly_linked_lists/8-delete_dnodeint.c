#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to pointer of the first node
 * @index: position of node to be deleted
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *node_to_delete;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	node_to_delete = current;

	current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(node_to_delete);
	return (1);
}

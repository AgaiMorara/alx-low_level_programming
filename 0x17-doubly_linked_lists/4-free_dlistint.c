#include "lists.h"
/**
 *free_dlistint - frees a doubly linked list
 *@head: entry point to list
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}

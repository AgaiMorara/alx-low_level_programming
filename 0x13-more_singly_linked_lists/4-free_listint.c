#include "lists.h"
/**
 *free_listint - frees a singly linked list
 *@head: entry point to list
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}

#include "lists.h"
/**
 *free_listint - frees a singly linked list
 *@head: entry point to list
 */
void free_listint(listint_t *head);

void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}

/**
 *free_listint2 - container to ensure *head is null
 *@head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;
	free_listint(current);
	*head = NULL;
}

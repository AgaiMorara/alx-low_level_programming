#include "lists.h"

/**
 *add_dnodeint_end - add a new node at the end of dlistint_t
 *@head: list
 *@n: member of node
 *Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = malloc(sizeof(dlistint_t));
	dlistint_t *traverser;

	if (!end)
	{
		return (NULL);
	}
	(*end).n = n;
	(*end).next = NULL;
	if (*head == NULL)
	{
		(*end).prev = NULL;
		*head = end;
		return (*head);
	}
	traverser = *head;
	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = end;
	(*end).prev = traverser;
	return (end);
}

#include "lists.h"

/**
 *add_nodeint_end - add a new node at the end of listint_t
 *@head: list
 *@n: member of node
 *Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *traverser;

	if (!end)
	{
		return (NULL);
	}
	(*end).n = n;
	(*end).next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}
	traverser = *head;
	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = end;
	return (end);
}

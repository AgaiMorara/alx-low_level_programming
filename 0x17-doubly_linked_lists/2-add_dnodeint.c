#include "lists.h"


/**
 *add_dnodeint - adds a new node at the beginning of a list
 *@head: pointer to a list if any
 *@n: int to be added
 *Return: address of the new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}

	(*newnode).n = n;
	(*newnode).next = *head;
	(*newnode).prev = NULL;
	if (*head != NULL)
		(**head).prev = newnode;
	*head = newnode;
	return (*head);
}

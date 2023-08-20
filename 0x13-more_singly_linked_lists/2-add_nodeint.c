#include "lists.h"


/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to a list if any
 *@n: int to be added
 *Return: address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	(*newnode).n = n;
	(*newnode).next = *head;
	*head = newnode;
	return (*head);
}

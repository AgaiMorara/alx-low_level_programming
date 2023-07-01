#include "lists.h"
#include <string.h>


/**
 *add_node - adds a new node at the beginning of a list
 *@head: pointer to a list if any
 *@str: string in the list
 *Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	(*newnode).str = strdup(str);
	if (!(newnode->str))
	{
		free(newnode);
		return (NULL);
	}
	if (*head != NULL)
		(*newnode).len = (*head)->len;
	(*newnode).next = *head;
	*head = newnode;
	return (*head);
}

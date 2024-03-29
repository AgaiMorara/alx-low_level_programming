#include "lists.h"
#include <string.h>

/**
 *add_node_end - adds a node at the end of a list_t list
 *@head: pointer to the head or list
 *@str: start of the string in a node
 *Return: list with all nodes including one at the end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tracker = *head;
	list_t *end = malloc(sizeof(list_t));

	if (!end)
	{
		return (NULL);
	}
	end->str = strdup(str);
	if (!end->str)
	{
		free(end);
		return (NULL);
	}
	end->len = strlen(end->str);
	end->next = NULL;

	if (tracker == NULL)
	{
		*head = end;
		return (*head);
	}

	while (tracker->next != NULL)
		tracker = tracker->next;
	tracker->next = end;
	return (end);
}

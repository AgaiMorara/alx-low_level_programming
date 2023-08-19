#include "lists.h"
#include <string.h>

/**
 *free_list - frees a list_t list
 */

void free_list(list_t *head)
{
	list_t *forfree = head;
	if (forfree)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}

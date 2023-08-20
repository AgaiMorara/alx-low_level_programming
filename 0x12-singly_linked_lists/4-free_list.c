#include "lists.h"
#include <string.h>

/**
 *free_list - frees a list_t list
 *@head: pointer to list
 */

void free_list(list_t *head)
{
	if (head)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}

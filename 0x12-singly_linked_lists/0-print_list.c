#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 *print_list - prints all elements of a list_t list
 *@h: head of the list
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *a = h;

	if (h == NULL)
		return (0);

	while (a->next != NULL)
	{
		i++;
		if (a->str)
			printf("[%ld] %s\n", strlen(a->str), a->str);
		else
			printf("[0] (nil)\n");
		a = a->next;
	}

	if (a->str)
		printf("[%ld] %s\n", strlen(a->str), a->str);
	else
		printf("[0] (nil)\n");
	return (i + 1);
}

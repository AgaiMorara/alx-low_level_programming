#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *reverse_listint - reverses a listint_t of a linked list
 *@head: - Pointer to the head pointer of the linked list
 *Return: pointer to head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *to;

	if (*head == NULL)
		return (NULL);
	prev = NULL;

	while(*head != NULL)
	{
		to = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = to;
	}
		*head = prev;
		return (*head);

}

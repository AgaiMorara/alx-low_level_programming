#include "lists.h"

/**
 *add_nodeint_end - add a new node at the endo of listint_t
 *@head: list
 *@n: member of node
 *Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listinr_t));
	listint_t *traverser = *head;
	if (!end)
	{
		return(NULL);
	}
	(*end).n = n;
	(*end).next =NULL;
	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}
	while(traverser != NULL)
		traverser = traverser-> next;
	traverser = end;
	

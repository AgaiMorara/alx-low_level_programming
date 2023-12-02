#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linkd list
 *@head: pointer to the head pointer
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ans;

	if (!(*head))
		return (0);

	temp = *head;
	*head = (*head)->next;

	ans = temp->n;

	free(temp);
	return (ans);
}

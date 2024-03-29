#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the list
 *@idx: index of the list where the new node should be added
 *@n: value of integer at node
 *Return: the address of the new node. Null if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ans;
	listint_t *temp = *head;



	ans = malloc(sizeof(listint_t));
	if (!ans || !head)
		return (NULL);

	ans->n = n;

	if (idx == 0)
	{
		ans->next = *head;
		*head = ans;
		return (ans);
	}

	while (idx > 1 && temp)
	{
		temp = temp->next;
		idx--;
	}

	if (!temp)
		return (NULL);

	ans->next = temp->next;
	temp->next = ans;

	return (ans);
}

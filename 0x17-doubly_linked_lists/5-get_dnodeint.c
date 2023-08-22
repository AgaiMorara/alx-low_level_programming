#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of dlistint_t
 *@head: 0th node pointer
 *@index: index of desired node
 *Return: desired node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;

	while (cur != NULL && index > 0)
	{
		cur = cur->next;
		index--;
	}
	if (cur == NULL || index > 0)
		return (NULL);
	return (cur);
}

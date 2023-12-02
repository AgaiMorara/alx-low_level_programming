#include "lists.h"
/**
 *get_node_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to the head
 *@index: index of the node, starting at 0.
 *Return: the nth node if exists otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ans = head;
	unsigned int iter = index;

	while (iter-- && ans)
		ans = ans->next;

	return (ans);
}

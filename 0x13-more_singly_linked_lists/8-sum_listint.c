#include "lists.h"

/**
 *sum_listint - returns the sum of all data (n) of a listint_t linked list
 *@head: pointer to the list
 *Return: sum of all the data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int ans = 0;

	while (head)
	{
		ans += head->n;
		head = head->next;
	}
	return (ans);
}

#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for value in a sorted integer array using jump search
 * @array: pointer to the first element of the array
 * @size: length of the array
 * @value: value to search for
 *
 * Return: index of value, -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t iter, prev, next, i;

	if (array == NULL)
		return (-1);
	prev = 0;
	iter = sqrt(size);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		next = prev + iter;

		if (next >= size)
			next = size - 1;
		if (array[next] >= value || next == size - 1)
			break;
		prev += iter;
	}
	printf("Value found between indexes [%lu]", prev);
	printf(" and [%lu]\n", prev + iter);

	for (i = prev; i <= prev + iter && i < size; i++)
	{
		printf("Value checked array[%lu]", i);
		printf(" = [%d]\n", array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

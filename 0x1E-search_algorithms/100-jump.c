#include "search_algos.h"
#include <math.h>

/**
 *jump_search - searches for a values in a sorted array of integers
 *@array: pointer to the first element of the array to search
 *@size: number of elements in array
 *@value: value to search for
 *Return: index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, left = 0;
	size_t right = 0;
	size_t jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	while (right < size && array[right] < value)
	{
		printf("Value checked array [%lu] = [%d]", right, array[right]);
		putchar(10);
		left = right;
		right += jump;

	}

	if (right >= size)
		right = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

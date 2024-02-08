#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of ints using binary search
 *@array: pointer to first element of list of values to be searched
 *@size:  length of array
 *@value: Value to search for
 *
 *Return: first index where value is located or -1 if not present or NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size -1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		putchar(10);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

#include "search_algos.h"

/**
 *linear_search - searches for a value using linear search
 *@array: array with the values from which to perfom search
 *@size: Length of the array
 *@value: value to find location for
 *Return: Index of the array or -1 if value is not present in array or NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t ans;

	if (array == NULL)
		return (-1);

	for (ans = 0; ans < size; ans++)
	{
		printf("Value checked array[%lu] = [%d]\n", ans, array[ans]);
		if (array[ans] == value)
			return (ans);
	}
	return (-1);
}

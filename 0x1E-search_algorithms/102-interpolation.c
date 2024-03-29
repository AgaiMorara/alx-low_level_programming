#include "search_algos.h"
/**
 *interpolation_search - searches for a value in a sorted array of integers
 *@array: pointer to the first element in the array
 *@size: size of the array
 *@value: value to find position for
 *
 *Return: index of value if available, -1 if does not exist
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range", high);
	return (-1);
}

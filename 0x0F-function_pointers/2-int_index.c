#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: elements in an array from among which to search
 *@size: size of the array
 *@cmp: function pointer to aid in the search
 *Return: integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, h = 0;

	while (i < size && h == 0)
	{
		h = cmp(array[i]);
		i++;
	}
	if (i == size || size <= 0)
		return (-1);

	return (i - 1);
}

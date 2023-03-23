#include "function_pointers.h"

/**
(int_index - searches for an integer
*@array: elements in an array from among which to search
*@size: size of the array
*@cmp: function pointer to aid in the search
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, h = 0;
	if (size <= 0)
		return (-1);
	while (i < size && h != 1)
	{
		h = cmp(array[i]);
		i++;
	}
	if (i == size)
		return (-1);

	return (i - 1);
}

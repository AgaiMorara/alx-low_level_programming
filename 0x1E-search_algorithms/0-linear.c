#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *linear_search - searches for a value in an array of integers
 *@array:  pointer to the first element of the array to search in
 *@size:  number of elements in array
 *@value: is the value to search for
 *Returns: index, or -1 if value is not present
 */
int linear_search(int  *array, size_t size, int value)
{
	int ans = 0;

	if (size == 0 || !array)
		return (-1);

	while (size --)
	{
		printf("Value Checked  array[%d] = [%d]\n", ans, array[ans]);
		if  (value ==   array[ans] )
			return (ans);
		ans++;
	}
	return (-1);
}

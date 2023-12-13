#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the linear search algorithm
 *@array: pointer to the first element
 *@size: number of elements in array
 *@value: value to search for
 *Return: the first index , where value is located
 */

int binary_search( int *array, size_t size, int value)
{
  int left = 0;
  int i;
  int right = size - 1;
  int mid;

  if (array == NULL)
    return (-1);

  while (left <= right)
    {
      printf("Searching in array: ");
      for ( i = left; i <= right; i++)
	{
	printf("%d", array[i]);
	if (i < right)
	  putchar(',');
	else
	  putchar('\n');
	}
      
      mid = (right + left) / 2;
      if (array[mid] == value)
	return (mid);
      else if (array[mid] < value)
	left = mid + 1;
      else
	right = mid - 1;
    }
  return (-1);
}
  
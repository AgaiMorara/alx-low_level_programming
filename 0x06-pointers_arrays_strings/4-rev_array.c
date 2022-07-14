#include "main.h"

/**
 *reverse_array - program that reverses an array
 *@n: the number of elements in the array
 *@a: an array of integers
 *
 */

void reverse_array(int *a, int n)
{
	int tempint, i, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tempint = a[i];
		a[i] = a[j];
		a[j] = tempint;
		j -= 1;
	}
}

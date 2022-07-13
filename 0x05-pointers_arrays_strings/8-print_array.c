#include <stdio.h>

/**
 *print_array - progranm that prints n elements of an array of integers
 *@a: integer array whose n elements are to be printed
 *@n: the size of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (n == 1)
		printf("%d\n", a[0]);
	else if (n < 1)
		printf(" \n");
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%i, ", a[i]);
		printf("%d\n", a[(n - 1)]);

	}
}

# include "main.h"

/**
 *print_array - prints n elements of an array of integers
 *@a: pointer to array
 *@n: number of integers to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}

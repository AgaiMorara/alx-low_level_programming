# include "main.h"
/**
 *print_diagsums - prints the sum of two diagonals of a square matrix
 *@a: pointer to integer array
 *@size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	long int sum1 = a[0], sum2 = a[size - 1], h;
	long int revindex, index, i;

	for (i = 1, h = 2; i <= size; i++, h++)
	{
		index = ((i * size) + h) - 1;
		revindex = (h * size) - i;
		sum1 += a[index];
		sum2+= a[revindex];
	}
	printf("%ld , %ld\n", sum1, sum2);
}

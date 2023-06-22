#include "variadic_functions.h"
/**
 *sum_them_all - sums all of its parameters
 *@n: parameter count
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list rm;
	unsigned int i;
	int sum;

	va_start(rm, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(rm, int);
	va_end(rm);
	return (sum);
}

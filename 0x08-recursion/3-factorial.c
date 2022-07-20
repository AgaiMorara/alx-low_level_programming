#include "main.h"

/**
 *factorial - returns the factorial of an integer
 *@n: positive integer values
 *Return: the factorial or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

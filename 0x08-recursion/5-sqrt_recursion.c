#include "main.h"

/**
 *_sqr- returns the natural square root of a number if one exists
 *@n:  number
 *@a: checker
 *Return: -1 if no natural squareroot is available
 */

int _sqr(int n, int a)
{
	if ((a * a - 2 * a + 1) >= n)
	{
		if (n == (a * a - 2 * a + 1))
			return (a - 1);
		return (_sqr(n, a - 1));
	}
	return (-1);
}

/**
 *_sqrt_recursion - returns the natural square root of a number if one exists
 *@n:  number
 *Return: -1 if no natural squareroot is available
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n == 4)
		return (2);
	if (n < 0)
		return (-1);
	return (_sqr(n, n / 2));
}

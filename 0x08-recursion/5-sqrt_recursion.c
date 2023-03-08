#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number if one exists
 *@n:  number
 *Return: -1 if no natural squareroot is available
 */

int _sqrt_recursion(int n)
{
	int approximate = n/2;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (approximate == n / approximate)
		return (approximate);
	else
		approximate  = 1/2 * (approximate + n/approximate);
	return (_sqrt_recursion(approximate));
}

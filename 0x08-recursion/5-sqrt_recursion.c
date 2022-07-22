#include "main.h"

/**
 *_sqrt_find - helper function to accomodate variable
 *@n: input for root function
 *@r: constant aid checker
 *Return: -1 if y does not have a natural sqrt 0 otherwise
 */
int _sqrt_find(int n, int r)
{

	if ((r * r > n) || n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (r * r == n)
		return (r);
	return (_sqrt_find(n, r + 1));
}

/**
 *_sqrt_recursion - function to return squareroot
 *@n: input
 *Return: output of helper function
 */



int _sqrt_recursion(int n)
{
	return (_sqrt_find(n, 1));
}

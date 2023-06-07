#include "main.h"
/**
 *_sqrt_recursion(int n)
 *@n: integer with natural squareroot
 *Return: sqrt if natural, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	limit = n/2;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
       else

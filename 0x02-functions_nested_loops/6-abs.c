# include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@c: argument to compute absolute value
 *Return: absolute value
 */

int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	return (c);
}

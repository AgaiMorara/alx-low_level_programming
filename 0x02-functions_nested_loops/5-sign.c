# include "main.h"

/**
 *print_sign - prints the sign of an integer argument
 *@n: The integer argument
 *Return: 1 if n is positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
		return (_putchar(43));
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

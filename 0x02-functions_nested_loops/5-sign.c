#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: integer whose sign should be printed
 *Return: 1 if positive, 0 if n is zero and -1 if n is less than zero
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i  = 1;
		_putchar('+');
	}
	else
	{
		i = (n < 0) * -1;
		if (i == 0)
			_putchar('0');
		else
			_putchar('-');
	}
	return (i);
}

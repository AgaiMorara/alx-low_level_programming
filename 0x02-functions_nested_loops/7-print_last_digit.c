#include "main.h"

/**
* print_last_digit - prints the last digit of an integer
*@n: parameter
*Return: last digit
*/
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = ((-1 * n) % 10 + 48);

	else
		i = ((n * 1) % 10 + 48);
	_putchar(i);
	return (i - 48);
	_putchar('\n');
}

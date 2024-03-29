#include "main.h"
/**
 * print_number - prints an integer;
 * @n: number to print
 */
void print_number(int n)
{
	int divisor = 1;

	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}

#include "main.h"
/**
 * print_number - prints an integer;
 *@n: number to print
 */

void print_number(int n)
{
	int remainder = n, i, j, k;

	if (n < 0)
	{
		_putchar('-');
		remainder *= -1;
	}
	else if (n == 0)
		_putchar('0');
	while (remainder)
	{
		i = 0, j = 1, n = remainder;

		while (n >= 10)
		{
			n /= 10;
			i++;
		}
		_putchar(n + '0');
		while (i--)
			j *= 10;
		k = (1 * j) / 10;
		remainder = remainder - (n * j);
		while (remainder < k)
		{
			_putchar('0');
			k /= 10;
		}
	}
}

#include "variadic_functions.h"
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

/**
 *print_separator - prints delimiter
 *@separator: delimiter
 */

void print_separator(const char *separator)
{
	const char *trav = separator;

	while (*trav != '\0')
	{
		_putchar (*trav);
		trav++;
	}
}


/**
 *print_numbers - prints numbers
 *@separator: delimiter
 *@n: par count
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		print_number(va_arg(ap, int));
		if (separator && i < (n - 1))
			print_separator(separator);
	}

	va_end(ap);
	_putchar (10);
}

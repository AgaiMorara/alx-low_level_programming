#include "variadic_functions.h"
/**
 *_putchar - write to stdout
 *@c: character to be written
 *Return: 1 for each written char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 *print_string - prints a string
 *@string: str pointer
 *
 */
void print_string(char *string)
{
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}
}

/**
 *print_strings - prints strings
 *@separator: delimiter
 *@n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list st;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		print_string(va_arg(st, char *));
		if (separator)
			while (*separator != '\0')
			{
				_putchar(*separator);
				separator++;
			}
	}
	_putchar (10);

	va_end(st);
}

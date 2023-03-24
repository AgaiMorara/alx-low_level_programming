#include "variadic_functions.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_string(char *string)
{
	if (!string)
		string = "(nil)";
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}
}
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list st;
	const char *trav;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		print_string(va_arg(st, char *));
		if (separator)
		{
			trav = separator;
			while (*trav != '\0' && i != n - 1)
			{
				_putchar(*trav);
				trav++;
			}
		}
	}
	_putchar (10);
	va_end(st);
}

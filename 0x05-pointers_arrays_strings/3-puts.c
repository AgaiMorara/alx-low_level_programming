# include "main.h"

/**
 *_puts - writes a string with a trailing newline to stdout
 *@str: pointer to string
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

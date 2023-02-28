# include "main.h"

/**
 *puts2 - writes a string with a trailing newline to stdout
 *@str: pointer to string
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}

# include "main.h"

/**
 *puts2 - writes a string with a trailing newline to stdout
 *@str: pointer to string
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	while (*str != '\0' && j < i)
	{
		_putchar(*str);
		j += 2;
		str += 2;
	}
	_putchar(10);
}

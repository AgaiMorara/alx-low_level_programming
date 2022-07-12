#include "main.h"
/**
 *print_rev - prints a string in reverse, followed by a new line, to stdout
 *@s: strint to be printed to the standard output
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);

}

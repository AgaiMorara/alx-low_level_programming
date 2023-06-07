#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 *_puts_recursion - prints a string, followed by a new line
 *@s: pointer to the string
 */

void _print_rev__recursion(char *s)
{
	int i = strlen(s);
	if  (i <= 0)
	{
		_putchar(10);
		return;
	}

	write(1, s + i, 1);
	s++;
	i--;
	_puts_recursion(s + 1);
}

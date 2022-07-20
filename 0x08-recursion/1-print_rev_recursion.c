#include "main.h"

/**
 * _print_rev_recursion - recursive form of puts
 *@s:pointer to  string to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
	{
		return;
	}
	_putchar(*s);
}

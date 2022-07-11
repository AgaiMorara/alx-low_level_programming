#include "main.h"

/**
 *void _puts - prints a string, followed by a new line, to stdout
 *@str: strint to be printed to the standard output
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		_putchar(i);

}

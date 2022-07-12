#include "main.h"
#include <string.h>

/**
 *puts_half - prints the second half of a string + \n to stdout
 *@str: strint to be printed to the standard output
 *
 */

void puts_half(char *str)
{
	int i = strlen(str) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);

}

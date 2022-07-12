#include "main.h"
#include <string.h>

/**
 *puts2 - prints every second character.. (jumps characters in odd number spots
 *@str: string whose content should be printed evenly
 */

void puts2(char *str)
{
	int i = 0;
	int j = strlen(str);

	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}

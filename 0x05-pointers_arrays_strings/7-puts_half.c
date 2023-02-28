# include "main.h"

/**
 *puts_half - prints half of a string
 *@str: pointer to string
 */

void puts_half(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
		length++;
	str = length % 2 == 0  ? str + length / 2 : str + ((length - 1) / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

#include "main.h"

/**
 * print_line - function that prints a line of length n
 *@n: character that defines the length of the line
 *Return: Always 0
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

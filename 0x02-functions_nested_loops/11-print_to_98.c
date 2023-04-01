#include "main.h"

/**
 *print_to_98 - starts at n and prints to 98
 */

void print_to_98(int n)
{
	long int x = n;
	int i = 0;

	if (n < 98)
	{
		while (x / 10 != 0)
		{
			x /= 10;
			i++;
		}
		_putchar(x + 48);
		

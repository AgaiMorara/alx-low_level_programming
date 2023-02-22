#include "main.h"

/**
 *times_table - prints the 0-9 multiplication table
 */

void times_table(void)
{
	int i, j = 10, k = 0;

	for (i = 0; i < 10; i++)
	{
		while (j)
		{
			if (k < 10 && j != 10)
			{
				_putchar(32);
				_putchar(k + 48);
			}
			else if (j == 10)
				_putchar('0');
			else
			{
				_putchar(k / 10 + 48);
				_putchar(k % 10 + 48);
			}
			if (j != 1)
			{
				_putchar(',');
				_putchar(32);
			}
			k += i;
			j--;
		}
		k = 0;
		j = 10;
		_putchar(10);
	}
}

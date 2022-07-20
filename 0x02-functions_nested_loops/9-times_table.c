#include "main.h"

/**
 * times_table - prints the multication table for single digits numbers
 *
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		j = 0, k = 0;

		while (k < 10)
		{
			if (j >= 10 && k > 1)
			{
				_putchar((j / 10) + 48);
			}
			else if (k > 0)
				_putchar(' ');

			_putchar((j % 10) + 48);
			if (k == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			j += i;
			k++;
		}
	_putchar(10);
	}
}

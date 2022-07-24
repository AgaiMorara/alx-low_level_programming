#include "main.h"

/**
 *print_times_table - prints the multication table for single digits numbers
 *@n: size of table
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		j = 0, k = 0;

		while (k <=  n)
		{
			if (j >= 10 && k > 0)
			{
				if (j >= 100)
				{
					_putchar((j / 100) + 48);
					_putchar((j % 100) / 10 + 48);
				}
				else
					_putchar((j / 10) + 48);
			}
			else if (k > 0)
				_putchar(' ');

			_putchar((j % 10) + 48);
			if (k == n)
			{
				break;
			}
			_putchar(',');
			if (j < 100)
				_putchar(' ');
			_putchar(' ');
			j += i;
			k++;
		}
	_putchar(10);
	}
}

# include "main.h"

/**
 *jack_bauer - prins every minute of the day.
 */

void jack_bauer(void)
{
	int h = 0, k = 0;

	while (h < 24)
	{
		while (k < 60)
		{
			_putchar(h / 10 + 48);
			_putchar(h % 10 + 48);
			_putchar(58);
			_putchar(k / 10 + 48);
			_putchar(k % 10 + 48);
			_putchar(10);
			k++;
		}
		k = 0;
		h += 1;
	}
}

# include "main.h"

/**
 *print_alphabet_x10 - prints lower case alphabet
 *
 *
 */

void  print_alphabet_x10(void)
{
	int j = 0;
	int i = 97;

	while (j < 10)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		i = 97;
		j++;
	}
}

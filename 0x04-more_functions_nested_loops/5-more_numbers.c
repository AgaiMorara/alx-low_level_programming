#include "main.h"

/**
 *more_numbers - prints  universal language numbers 0 -14
 *
 *Return: Always 0.
 */
void more_numbers(void)
{
	int i;

	int j;

	for (j = 48; j < 58; j++)
	{

		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(49);
			_putchar((i % 10) + '0');
		}

	_putchar('\n');
	}
}

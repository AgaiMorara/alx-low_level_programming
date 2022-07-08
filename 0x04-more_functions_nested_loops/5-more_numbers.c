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

		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		for (i = 48; i < 53 ; i++)
		{
			_putchar(49);
			_putchar(i);
		}

	_putchar('\n');
	}
}

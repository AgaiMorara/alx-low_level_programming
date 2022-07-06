#include "main.h"

/**
 *print_alphabet_x10 - program that prints the alphabent in lowercase
 *program should only use _putchar function from our lib
 *Return: int 0 if successful
 */

void print_alphabet_x10(void)
{
	char N;

	int i;

	for (i = 1; i <= 10; i++)
	{
		for (N = 'a'; N <= 'z'; N++)
		{
			_putchar(N);
		}
		_putchar('\n');
	}

}

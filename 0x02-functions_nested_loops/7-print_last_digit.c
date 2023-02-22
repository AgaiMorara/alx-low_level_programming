# include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: the number to print last digit
 *Return: Value of the last digit
 */

int print_last_digit(int n)
{
	long int x = n;

	if (x < 0)
		x *= -1;
	_putchar((x % 10) + 48);
	return (x % 10);
}

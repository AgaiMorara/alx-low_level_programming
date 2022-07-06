#include "main.h"

/**
 *main - program that prints the alphabent in lowercase
 *program should only use _putchar function from our lib
 *Return: int 0 if successful
 */

int main(void)
{
	char N;

	for (N = 'a'; N <= 'z'; N++)
	{
		_putchar(N);
	}
	_putchar('\n');
	return (0);
}

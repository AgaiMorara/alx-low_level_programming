#include <stdio.h>

/**
 *main - program that prints numbers base 10
 *program implements ascii and putchar
 *Return: int 0 if successful
 */

int main(void)
{
	int N;

	for (N = 48; N < 58; N++)
	{
		putchar(N);
		if (N == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}

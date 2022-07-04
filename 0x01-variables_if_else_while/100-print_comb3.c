#include <stdio.h>

/**
 *main - program that prints numbers base 10
 *program implements ascii and putchar
 *Return: int 0 if successful
 */

int main(void)
{
	int N;

	int P;

	for (N = 48; N < 58; N++)
	{
		for (P = 49; N < 58; N++)
		{
			if (P > N)
			{
				putchar(N);
				putchar(P);
				if (P == 57)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}

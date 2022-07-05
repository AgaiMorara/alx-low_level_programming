#include <stdio.h>

/**
 *main - program that prints 2 digit combintions
 *program implements ascii and putchar
 *Return: int 0 if successful
 */

int main(void)
{
	int N;

	int P;

	int Y;

	int Z;

	for (N = 48; N < 58; N++)
	{
		for (P = 48; P < 58; P++)
		{
			putchar(N);
			putchar(P);
			putchar(32);
			for (Y = 48; Y < 58; Y++)
			{
				for (Z = 49; Z < 48; Z++)
				{
					putchar(y);
					putchar(z);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

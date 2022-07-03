#include <stdio.h>

/**
 *main - program that prints lower alphabet in reverse
 *program should only use putchar function
 *Return: int 0 if successful
 */

int main(void)
{
	int N;

	for (N = 122; N >= 97; N--)
	{
		putchar(N);
	}
	putchar(10);
	return (0);
}

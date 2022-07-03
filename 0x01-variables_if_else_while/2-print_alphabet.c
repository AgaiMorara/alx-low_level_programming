#include <stdio.h>

/**
 *main - program that prints the alphabent in lowercase
 *program should only use putchar function
 *Return: int 0 if successful
 */

int main (void)
{
	int N;
	for (N = 97; N <= 122; N++)
	{
		putchar(N);
	}
	putchar(10);
	return (0);
}

# include <stdio.h>

/**
 *main - entry point to alphabet program
 *
 *Return: 0 success
 */
int main(void)
{
	int i = 26;

	while (i)
	{
		putchar(96 + i);
		i--;
	}
	putchar(10);
	return (0);
}

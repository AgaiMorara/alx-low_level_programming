# include <stdio.h>

/**
 *main - entry point to alphabet program
 *
 *Return: 0 success
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		putchar(97 + i);
		i++;
	}
	putchar(10);
	return (0);
}

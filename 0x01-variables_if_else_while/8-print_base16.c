# include <stdio.h>

/**
 *main - entry point to alphabet program
 *
 *Return: 0 success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	i -=  10;
	while (i < 6)
	{
		putchar(97 + i);
		i++;
	}

	putchar(10);
	return (0);
}

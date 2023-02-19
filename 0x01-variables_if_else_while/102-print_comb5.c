#include <stdio.h>

/**
 *main - entry point to program that prints combinations
 *
 *Return: 0 (success)
 */

int main(void)
{
	int i = 0, j = 1;

	while (i < 99)
	{
		while (i < j && j <= 99)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(32);
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			if (i + j != 197)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar(10);
	return (0);
}

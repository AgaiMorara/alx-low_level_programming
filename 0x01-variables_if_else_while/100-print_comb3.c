#include <stdio.h>

/**
 *main - entry point to program that prints combinations
 *
 *Return: 0 (success)
 */

int main(void)
{
	int i = 0,j = 1;

	while(i < 9)
	{
		while (j > i && j <= 9)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i + j != 17)
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

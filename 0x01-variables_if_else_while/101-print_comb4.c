#include <stdio.h>

/**
 *main - entry point to program that prints combinations
 *
 *Return: 0 (success)
 */

int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i < 9)
	{
		while (j > i && j <= 9)
		{
			while (k > j && k <= 9)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
			if (i + j + k != 24)
			{
				putchar(44);
				putchar(32);
			}
			k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = i + 2;
	}
	putchar(10);
	return (0);
}

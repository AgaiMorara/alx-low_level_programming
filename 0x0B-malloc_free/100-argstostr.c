#include "main.h"

/**
 *argstostr - concatenates all arguments of a program
 *@ac: argument count
 *@av: argument vector
 *Return: concated arguments
 */

char *argstostr(int ac, char **av)
{
	char *ans;
	int i = 0, j = 0, k = 100, l = 0;

	if (ac == 0 || !av)
		return (NULL);
	ans = malloc(sizeof(char) * k + 1);

	if (ans)
	{
		while (ac--)
		{
			i = 0;
			while (av[l][i] != '\0' && ans)
			{
				if (j >= k)
				{
					k += 53;
					ans = realloc(ans, k);
				}
				*(ans + j) = av[l][i];
				j++;
				i++;
			}
			*(ans + j) = '\n';
			j++;
			l++;
		}
		*(ans + j) = '\0';
	}
	return (ans);
}

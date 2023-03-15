#include "main.h"

/**
 *argstostr - concatenates all arguments of a program
 *@ac: argument count
 *@av: argument vector
 */

char *argstostr(int ac, char ** av)
{
	char *ans;
	int i = 0, j = 0, k = 50;

	if (ac == 0 || !av)
		return (NULL);
	ans = malloc(sizeof(char) * k + 1);

	if (ans)
	{
		while (ac--)
		{
			i = 0;
			while (*(av[i]) != '\0' && ans)
			{
				if (j >= k)
				{
					k += 50;
					ans = realloc(ans, k);
				}
				*(ans + j) = *av[i];
				j++;
				i++;
			}
			*(ans + j) = '\n';
			j++;
		}
		*(ans + j) = '\0';
	}
	return (ans);
}

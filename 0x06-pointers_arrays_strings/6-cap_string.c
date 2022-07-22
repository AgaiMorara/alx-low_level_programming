#include "main.h"

/**
 *cap_string - program that converts all lower case characters of a string
 * to upper case characters
 *@str: string parameter
 *Return: passed string in upper case
 */

char *cap_string(char *str)
{
	int x = 0, y = 0;
	char seps[] = {32, 9,'\n', ',', ';', '.', '!', '?', '"', '(', ')', '{',
		       '}'};

	while (str[x])
	{
		while (y < 13)
		{
			if ((x == 0 || str[x - 1] == seps[y])
			    && (str[x] >= 97 && str[x] <= 122))
				str[x] -= 32;
			y++;
		}
		x++;
	}
	return (str);
}

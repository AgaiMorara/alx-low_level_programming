#include "main.h"

/**
 *string_toupper - program that converts all lower case characters of a string
 * to upper case characters
 *@str: string parameter
 *Return: passed string in upper case
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 97 && str[x] <= 122)
			str[x] -= 32;
		x++;
	}
	return (str);
}

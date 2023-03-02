#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@s: pointer to string.
 *Return: The string Capitalized
 */

char *cap_string(char *s)
{
	char *ans = s;
	char delimiters[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 58, 59, 63, 123, 125};
	int i, dummy = 1;

	while (*s != '\0')
	{
		for (i = 0; i < 14; i++)
		{
			if (*s == delimiters[i])
			{
				dummy = 1;
				break;
			}
			else
				dummy = 0;
		}
		s++;
		while ((*s > 96 && *s < 123) && dummy == 1)
			*s -= 32;
	}

	return (ans);
}

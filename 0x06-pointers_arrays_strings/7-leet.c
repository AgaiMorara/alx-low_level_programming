#include "main.h"

/**
 *leet - encodes characters to leet code
 *@s: pointer to string
 *Return: array with code
 */

char *leet(char *s)
{
	char *ans = s;
	int i;

	while (*s != '\0')
	{
		char letters[] = "aeotl";
		char leetcode[] = "43071";

		for (i = 0; i < 5; i++)
		{
			if (*s == letters[i] || *s == letters[i] - 32)
				*s = leetcode[i];
		}
		s++;
	}
	return (ans);
}

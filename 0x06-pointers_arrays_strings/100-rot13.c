#include "main.h"

/**
 *rot13 - encodes characters to rot13
 *@s: pointer to string
 *Return: array with code
 */

char *rot13(char *s)
{
	char *ans = s;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (*s == a[j])
			{
				*s = rot13[j];
				break;
			}
			j++;
		}
		s++;
	}
	return (ans);
}

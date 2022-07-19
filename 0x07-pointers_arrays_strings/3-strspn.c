#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: pointer to the string
 *@accept: the prefix pointer both may point to same but we only accept
 *
 *Return: a pointer to the character c in string s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*s != '\0')
	{
		while (accept[j] != '\0' && (*s != accept[j]))
		{
			j++;
			s++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);

}

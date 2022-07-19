#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *
 *@s: pointer to the string
 *@c: the character being searched for
 *
 *Return: a pointer to the character c in string s
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s + 1);

}

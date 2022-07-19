#include "main.h"
#include <stddef.h>

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

	if (s == NULL)
		return (NULL);
	while (((*s != '\0')|(*s != c)))
	{
		s++;
	}
	if (*s == '\0')
		return (NULL);
	return (s);
}

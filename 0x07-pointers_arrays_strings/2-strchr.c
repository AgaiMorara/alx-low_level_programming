#include "main.h"

/**
 *_strchr - locates a character in a string.
 *@s: The string
 *@c: The character
 *Return: a pointer to the first occurece of string, NULL IF NOT FOUND
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (NULL);
}

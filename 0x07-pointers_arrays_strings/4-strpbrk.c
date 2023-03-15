# include "main.h"

/**
 *_strpbrk - searches for a string for any of a set of bytes
 *@s: string to search in
 *@accept: bytes to be accepted in the string
 *Return: a pointer to the bytes in s that matches one of the bytes in accept
 *or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *recycle = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = recycle;
	}
	return (NULL);
}

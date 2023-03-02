#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: 0 if equal, any int otherwise
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);
	return (*s1 - *s2);
}

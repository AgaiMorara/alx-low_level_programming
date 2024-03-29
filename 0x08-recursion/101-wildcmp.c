#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1 if the strings are considered
 * identical
 * @s1: pointer to first string
 * @s2: second string
 * Return: 1 if true, 0 Otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*' || *s1 == *s2)
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1) ||
				(*s1 != '\0' && wildcmp(s1 + 1, s2)));
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

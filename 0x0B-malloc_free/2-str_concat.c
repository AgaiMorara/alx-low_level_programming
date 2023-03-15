# include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: NULL if empty, concatenated string otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *conc, *ans;
	int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	conc = malloc(sizeof(char) * (i + j) + 1);
	ans = conc;

	if (conc != NULL)
	{
		while (i--)
			*conc++ = *s1++;
		while (j--)
			*conc++ = *s2++;
		*conc = '\0';
	}
	return (ans);
}

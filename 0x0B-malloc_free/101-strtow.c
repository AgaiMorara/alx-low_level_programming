# include "main.h"

/**
 *strtow - splits a string into words.
 *@str: the string
 *Return: NULL if str == NULL, douple ptr otherwise
 */

char **strtow(char *str)
{
	int words = 0, i = 0;
	char **ans;

	if(!str)
		return (NULL);
	while(*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
			words++;
		i++;
	}
	ans = malloc(sizeof(1 + words) + i);
	return (ans);
}

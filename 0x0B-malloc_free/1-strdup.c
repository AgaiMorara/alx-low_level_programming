# include "main.h"
/**
 *_strdup - returns a pointer to duplicate of str
 *@str: string to duplicate
 *Return: pointer to duplicated str
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *dup;

	while (*(str + i) != '\0')
		i++;
	dup = malloc(sizeof(char) * i + 1);

	if (dup != NULL)
	{
		while (i--)
		{
			*(dup + j) = *(str + j);
			j++;
		}
	}
	return (dup);
}

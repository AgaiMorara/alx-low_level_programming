# include "main.h"

/**
 *_strlen - function that returns the lenght of a string
 *@s: pointer to string
 *
 *Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

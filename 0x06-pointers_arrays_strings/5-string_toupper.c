#include "main.h"
/**
 *string_toupper - changes all lowercase letters to uppercase
 *@c: pointer to string
 *Return: original pointer
 */

char *string_toupper(char *c)
{
	char *ans = c;

	while (*c != '\0')
	{
		if (*c > 96 && *c < 123)
			*c -= 32;
		c++;
	}
	return (ans);
}

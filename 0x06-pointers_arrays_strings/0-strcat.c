#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: pointer to destination string
 *@src: pointer to source string
 *Return: original dest
 */

char *_strcat(char *dest, char *src)
{
	char *ans = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest++ = '\0';
	return (ans);
}

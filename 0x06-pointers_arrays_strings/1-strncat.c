#include "main.h"
/**
 *_strncat - concatenates upto n bytes from src
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of bytes to concat
 *Return: pointer to original dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ans = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n--)
		*dest++ = *src++;
	*dest++ = '\0';
	return (ans);
}

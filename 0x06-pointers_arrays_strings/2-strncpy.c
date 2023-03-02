#include "main.h"

/**
 *_strncpy - copies upto n bytes from src to dest
 *@dest: pointer to destination string
 *@src: source
 *@n: number of bits to copy
 *Return: original dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ans = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
		*dest++ = *src++;
	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}
	return (ans);
}

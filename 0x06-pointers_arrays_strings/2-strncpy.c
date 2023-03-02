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

	while ((*dest++ = *src++) != '\0' && n--)
		;
	return (ans);
}

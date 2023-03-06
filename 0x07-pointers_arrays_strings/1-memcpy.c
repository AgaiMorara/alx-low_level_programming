#include "main.h"

/**
 *_memcpy - copies n bytes from src to dest
 *@dest: pointer to storage buffer
 *@src: pointer to memory area to be copied
 *@n: number of bytes to copy
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ans = dest;

	if (dest || src == NULL)
		return (dest);
	while (n)
	{
		dest = src;
		dest++, src++;
		n--;
	}
	return (ans);
}

#include "main.h"
#include <stddef.h>

/**
 *_memcpy - function that copies n bytes from memory area src
 *
 *@src: pointer to a memory area to copy from
 *@dest: pointer to memory area to copy to
 *@n: the number of times to repeat b
 *Return: a pointer to memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	char *modified_ptr = dest;

	if (dest == NULL)
		return (NULL);
	while (j < n)
	{
		*dest = *src;
		src++;
		dest++;
		j++;
	}
	return (modified_ptr);
}

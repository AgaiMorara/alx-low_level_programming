#include "main.h"
#include <stddef.h>

/**
 *_memset - function that fills the first n bytes of the memory area
 * pointed by s
 *@s: pointer to a memory area
 *@b: the constant to fill memory with
 *
 *Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	char *modified_ptr = s;

	if (s == NULL)
		return (NULL);
	while (j < n)
	{
		*s = b;
		s++;
		j++;
	}
	return (modified_ptr);
}

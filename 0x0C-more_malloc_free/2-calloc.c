#include "main.h"
#include <string.h>

/**
 *_calloc - allocates memory for an array of nmemb elements of size bytes each
 *@nmemb: member types to be allocated memory
 *@size: size of each member
 *Return: pointer with initialized memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = size * nmemb, i = 0;
	void *ptr;
	unsigned char *init;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(j);

	if (ptr != NULL)
	{
		init = (unsigned char *)ptr;
		for (i = 0; i < j; i++)
			init[i] = (unsigned char)0;
	}

	return (ptr);
}

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
	int j = size * nmemb;
	void *ptr;

	if (nmemb == 0 || size == 0)
		exit(0);
	ptr = malloc(j);

	if (ptr != NULL)
		memset(ptr, 0, j);

	return (ptr);
}

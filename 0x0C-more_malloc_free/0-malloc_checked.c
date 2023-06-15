#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: amount of memory to return
 *Returns: the memory address
 */

void *malloc_checked(unsigned int b)
{
	void *check;
	check = malloc(b);

	if (check == NULL)
		exit(98);
	return (check);
}

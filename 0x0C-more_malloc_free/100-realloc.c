#include "main.h"

/**
 *_realloc - reallocates memory using malloc and free
 *@ptr: mem ptr to previous malloced address
 *@old_size: size of previously allocated space
 *@new_size: size of new memory block
 *Return: ptr to new space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ans;
	char *modf, *readr;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		ans = malloc(new_size);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		readr = (char *)ptr;
		ans = malloc(new_size);
		if (ans)
		{
			modf = (char *)ans;
			while (old_size-- && (*modf++ = *readr++))
				;
			free(ptr);
		}
	}
	return (ans);
}

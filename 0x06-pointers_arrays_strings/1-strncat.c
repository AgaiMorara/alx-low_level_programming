#include "main.h"
#include <string.h>

/**
 *_strncat - function that concatenates two strings upto n bytes
 *@dest: pointer to the destination string
 *@src: pointer to the source of the string
 *
 *Return: The pointer to the dest of the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	int i = strlen(src);

	dest += strlen(dest);

	if (dest == NULL)
		return (src);
	if (i < n)
	{
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	else
	{
		while (i < n)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
	}
	*dest = '\0';
	return (dest_ptr);
}

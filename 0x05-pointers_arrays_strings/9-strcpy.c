#include "main.h"
#include <stddef.h>

/**
*_strcpy - another version of strcpy in the string library, copies a string
*
*@dest:pointer to destination string
*
*@src: pointer to the source of the string
*
*Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	if (dest == NULL)
		return (NULL);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ptr);
}

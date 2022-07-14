#include "main.h"
#include <stddef.h>
#include <string.h>

/**
*_strncpy - another version of strncpy in the string library, copies a string's
*first n characters
*@dest:pointer to destination string
*
*@src: pointer to the source of the string
*
*@n: number of characters to be copied
*Return: the pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	strncpy( dest, src, n);
	return (dest_ptr);
}

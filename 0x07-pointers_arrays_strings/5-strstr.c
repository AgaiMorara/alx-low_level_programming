# include "main.h"

/**
 *_strstr - searches for a string for any of a set of bytes
 *@haystack: string to search in
 *@needle: bytes to be accepted in the string
 *Return: a pointer to the bytes in s that matches one of the bytes in accept
 *or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	int  h = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			for (; *(needle + h) == *(haystack + h); h++)
			{
				if (*(needle + h) == '\0')
					return (haystack);
			}
		haystack++;
	}
	return (NULL);
}

# include "main.h"

/**
 *_strcpy - copies string to buffer pointed by second string
 *@dest: destination
 *@src: source
 *Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ans = dest;

	while ((*dest++ = *src++))
		;
	return (ans);
}

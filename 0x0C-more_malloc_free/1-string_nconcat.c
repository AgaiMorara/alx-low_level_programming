#include "main.h"

/**
 *string_nconcat - concatenates upto n bytes of s2 to s1
 *@s1: string to add to
 *@s2: string to take n bytes from
 *@n: number of bytes to take
 *Return: pointer of memory that has the two
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *ptr;

	while (s1 && *(s1 + i) != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + n + 1));

	while (ptr && s1 && (*(ptr + j) = *s1++) != '\0')
		j++;
	while (s2 && ptr && n--)
	{
		*(ptr + j) = *s2++;
		j++;
	}
	if (s2 && *s2 != '\0')
		*(ptr + j) = '\0';
	return (ptr);
}

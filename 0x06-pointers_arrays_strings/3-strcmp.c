#include "main.h"
#include <string.h>
/**
 *_strcmp- compares two strings
 *
 *@s1: pointer to first string
 *@s2: pointer to 2nd string
 *Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int indicator = 0;

	while (indicator == 0)
	{
		indicator = s1[i] - s2[i];
		if (s1[i] == '\0')
			break;
		i++;
	}
	return (indicator);
}

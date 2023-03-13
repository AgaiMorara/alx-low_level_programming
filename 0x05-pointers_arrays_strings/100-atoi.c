#include "main.h"

/**
 *_atoi - converts a string to an int
 *@s: The string
 *Return: Integer from the string
 */

int _atoi(char *s)
{
	int i = 0, j = 0, k = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0'  && *(s + i) <= '9')
		{
			if (j == 0)
				j += *(s + i) - '0';
			else
				j = j * 10 + (*(s + i) - '0');
		}
		if (j == 0 && *(s + i) == '-')
			k += 1;
		i++;
		if (j > 0 && *(s + i) == ' ')
			return (j);
	}
	if (k % 2 == 1)
		j *= -1;
	return (j);
}

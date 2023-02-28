# include "main.h"

/**
 *rev_string - reverses a string
 *@s - pointer to string
 */

void rev_string(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
		i++;
	char temp[i];
	i--;
	while (i >= 0)
	{
		temp[j] = *(s + i);
		i--;
		j++;
	}

	temp[j] = '\0';
	s = temp;
}

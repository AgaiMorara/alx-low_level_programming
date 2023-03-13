# include "main.h"

/**
 *rev_string - swaps values to reverse string
 *@s: pointer to string
 *
 */

void rev_string(char *s)
{
	int i, j = 0, temp;

	while (*(s + j) != '\0')
		j++;
	j--;

	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

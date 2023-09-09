#include "main.h"
#include <string.h>

/**
 * reverse - reverses a character string
 * @s: the string to be reversed
 */
void reverse(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

/**
 * infinite_add - add integers provided as strings and return them as a string
 * @n1: pointer to string with the first number
 * @n2: pointer to string with the second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *ans = r;
	int i = 0, j = 0, carry = 0, num1, num2, sum;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r - 1 || j > size_r - 1)
		return (NULL);
	i--;
	j--;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;

		*r = sum % 10 + '0';
		i--, j--, r++;
	}

	*r = '\0';
	reverse(ans);

	return (ans);
}

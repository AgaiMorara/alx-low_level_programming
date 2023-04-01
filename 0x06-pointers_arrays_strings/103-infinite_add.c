#include "main.h"
/**
 *reverse - reverses a string
 *@n: length of the string
 */

void reverse(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1 ; i < n / 2 ; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

/**
 * infinite_add - add integers provided as strings and return them as string
 *@n1: pointer to string with first number
 *@n2: pointer to string with second number
 *@r: buffer to store the result
 *@size_r: buffer size
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *ans = r;
	int i = 0, j = 0, carry = 0, num1, num2, sum;

	while (*n1++ != '\0', i++);
	while(*n2++ != '\0', j++);

	if (i > size_r - 1)
		return;
	else
		num1 == n1[i] + '0';
	if (j > size_r - 1)
		return;
	else
		num2 == n2[j] + '0';

	while (i || j || carry)
	{
		if (i == 0)
			num1 = 0;
		if (j == 0)
			num2 == 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;
		*r = sum % 10 + '0';
		i--, j--, r++;
    }
	reverse(ans, size_r);
	return (ans);
}

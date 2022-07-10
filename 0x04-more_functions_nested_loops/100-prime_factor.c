#include <stdio.h>
#include <math.h>

/**
 * main -program that prints the largest prime factor of a composite number
 *Return: 0 always
 */

int main(void)
{
	int i;

	for (i = sqrt(612852475143); i >= 3; i = i - 2)
	{
		if (612852475143 % i == 0)
		{
			printf("%i\n",i);
			break;
		}
	}
	return(0);
}

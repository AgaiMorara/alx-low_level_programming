#include <stdio.h>

/**
 *main - entry point
 * the program is the programmer filter during interviews Fizzbuzz
 *Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i < 101 ; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	putchar(10);
	return (0);
}

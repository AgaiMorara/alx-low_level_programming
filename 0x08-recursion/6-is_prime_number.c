#include "main.h"

/**
 *prime_find - helper function to accomodate variable
 *@n: input for root function
 *@r: constant aid variable checker
 *Return: 1 if n is prime 0 otherwise
 */
int prime_find(int n, int r)
{

	if (r == 1 && n >= 2)
		return (1);
	else if (n < 2)
		return (0);
	else if (n % r == 0)
		return (0);
	return (prime_find(n, r - 1));
}

/**
 *is_prime_number - function to return primenumber
 *@n: input
 *Return: output of helper function
 */



int is_prime_number(int n)
{
	return (prime_find(n, n / 2));
}

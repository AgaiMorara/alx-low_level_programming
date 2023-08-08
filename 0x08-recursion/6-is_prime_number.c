#include "main.h"
/**
 *checker - checks if prime
 *@a: iterator
 *@n: input to be checked
 *Return: 1 if prime, 0 otherwise
 */


int checker(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0)
		return (0);
	return (checker(n, a - 1));
}
/**
 *is_prime_number - checks if prime
 *@n: input to be checked
 *Return: 1 if prime, 0 otherwise
 */


int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	else if (n < 11 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	return (checker(n, n / 11));
}

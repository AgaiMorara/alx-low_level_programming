#include "main.h"

/**
 *main - entry point to program
 *@argc: argument count
 *@argv: argument vector
 *Return: success or failure
 */

int main(int __attribute__((unused)) argc, char __attribute__((unused))
	 *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}

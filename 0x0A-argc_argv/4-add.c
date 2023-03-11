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
	long int ans = 0;
	int n = argc;

	if (argc == 1)
		printf("0\n");
	else
		while (--n)
		{
			if (atoi(argv[n]) == 0 && argv[n][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			ans += atoi(argv[n]);
		}
	printf("%ld\n", ans);
	return (0);
}

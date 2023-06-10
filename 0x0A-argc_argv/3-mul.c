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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[1])) *  atoi(argv[2]));
	return (0);
}

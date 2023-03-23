#include "3-calc.h"
#include <stdlib.h>

/**
 *main - entry point to program
 *
 *Return: Exit status
 */

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ( b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", (get_op_func(argv[2]))(a, b));

	return (0);
}

#include "3-calc.h"
#include <string.h>
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
	char *arg1, *arg2;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	arg1 = strdup(argv[1]);
	arg2 = strdup(argv[3]);

	a = atoi(arg1);
	b = atoi(arg2);

	if ((b == 0 && strcmp(argv[2], "/") == 0) || strcmp(argv[2],"%") == 0)
	{
		printf("Error\n");
		free (arg1);
		free (arg2);
		exit (100);
	}
	printf("%d\n", (get_op_func(argv[2]))(a, b));
	free (arg1);
	free (arg2);

	return (0);
}

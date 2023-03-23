#include "3-calc.h"
 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

/**
 *get_op_func - selects the correct function to perform the operation asked
 *@s: operation
 *Return: result
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	while (ops[i].op != s || ops[i].f != NULL)
		i++;
	return (ops[i].f);
}

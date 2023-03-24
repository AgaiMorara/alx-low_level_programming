#include "3-calc.h"
/**
 *get_op_func - selects the correct function to perform the operation asked
 *@s: operation
 *Return: result
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {{"+", op_add},{"-", op_sub},{"*", op_mul},{"/", op_div},
		      {"%", op_mod},{NULL, NULL}
};
	int i = 0;

	while (strcmp(ops[i].op, s) != 0 || ops[i].f != NULL)
		i++;
	if (ops[i - 1].op)
		return (ops[i - 1].f);
	return (NULL);
}

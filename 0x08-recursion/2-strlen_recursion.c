#include "main.h"

/**
 *_strlen_recursion - returns the lenght of a string
 *finds it through recursion
 *@s: pointer to evaluation string
 *Return: length of a string similar to strlen
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

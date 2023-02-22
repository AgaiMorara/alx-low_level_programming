# include "main.h"

/**
 *_isalpha - checks if is alphabetic character;
 *@c: argument to be checked
 *Return: 1 if c is a letter 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 96 && c < 123) || (c >= 64 && c <= 91));
}

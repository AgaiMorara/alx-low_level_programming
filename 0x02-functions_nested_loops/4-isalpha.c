#include "main.h"

/**
* _isalpha - flag  function that identifies any alphabet character
*@c: character to be identified
*Return: 1 if alphabet 0 otherwise
*/
int _isalpha(int c)
{
	_putchar('\n')
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

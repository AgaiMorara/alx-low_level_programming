#include <unistd.h>
/**
 *_putchar - prints a character to screen
 *@c: ascii of character
 *Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

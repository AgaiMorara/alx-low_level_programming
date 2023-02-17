#include <stdio.h>
#include <unistd.h>

/**
 *main - entry point
 *iterate through a string to print each character to stdout
 *
 *Return: 1
 */
int main(void)
{
	char source[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, source, 59);
	return (1);
}

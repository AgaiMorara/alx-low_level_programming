# include "main.h"
/**
 * main - entry point to program
 *
 *Return:0
 */
int main(void)
{
	int i = 0;
	char word[] = "_putchar";
	while(word[i])
	{
		_putchar(word[i]);
		i++;
	}
	_putchar(10);
	return (0);
}

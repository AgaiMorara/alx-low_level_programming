#include <stdio.h>
#include <unistd.h>

/**
 *main - program ues prints to the standard error
 *without using printf, puts or any of their family functions
 *Return: 1 program finished successfully
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

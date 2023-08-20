#include <stdio.h>

void __attribute__((constructor)) before_main();
/**
 *before_main - using attribute constructor to print before main
 *
 *Description: write
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

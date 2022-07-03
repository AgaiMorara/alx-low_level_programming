#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - print last digit of a randomized number
  *n
  *Return:0 the success indicator
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %i is %i ", n,n % 10);
if (n > 5)
	printf("and iw greater than %i\n", 5);
else if (n == 0)
	printf("and is %i\n", 0);
else
	printf("and is less than %i and not 0\n", 6);
return (0);
}

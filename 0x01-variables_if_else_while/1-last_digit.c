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
printf("last digit of %i is ", n);
if (n>5)
	printf("greater than %i", 5);
else if (n ==0)I
	printf("and is %i", 0);
else
	printf("and is less than %i and is not 0", 6);
	printf('\n')
return (0);

}

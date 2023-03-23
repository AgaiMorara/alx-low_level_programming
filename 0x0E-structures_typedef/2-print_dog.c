#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_dog - prints the dog
 *@d: pointer to some dog
 */

void print_dog(struct dog *d)
{
	printf("Name : %s\n", !(d->name) ? "(nil)" : d->name);
	printf("Age: ");
	if (d->age)
		printf("%f\n", d->age);
	else
		printf("%d\n", 0);
	printf("Owner: %s\n", !(d->owner) ? "(nil)" : d->owner);
}
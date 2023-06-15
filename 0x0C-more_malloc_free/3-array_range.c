#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: minimum value in array
 *@max: maximum value in array
 *Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	for (i = min; i <= max && ptr; i++)
		*(ptr + i - min) = i;
	return (ptr);
}

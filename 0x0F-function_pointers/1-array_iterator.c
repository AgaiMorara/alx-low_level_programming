#include "function_pointers.h"

/**
 *array_iterator -executes a function given as a parameter in an array
 *@array: containes the list of functions to be executed
 *@size: size of the array
 *@action: function pointer to say what needs to be done
 */

void array_iterator(int *array, size_t size, void (*action) (int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

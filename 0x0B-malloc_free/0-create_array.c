# include "main.h"
/**
 *create_array - creates an array of chars initialized with c
 *@size: array size
 *@c: character to initialize with
 *Return: pointer to array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *myarray = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (myarray != NULL)
	{
		while (n < size)
		{
			myarray[n] = c;
			n++;
		}
	}
	return (myarray);
}

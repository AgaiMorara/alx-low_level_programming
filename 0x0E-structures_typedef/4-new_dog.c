#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - creates a new dog.
 *@name: name of the dog
 *@age: age of the dog
 *@owner: Guardian of the dog
 *Return: The dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog  *ans;

	ans = malloc(sizeof(dog_t));
	if (!ans)
	{
		free(ans);
		return (NULL);
	}

	ans->name = strdup(name);
	ans->owner = strdup(owner);
	ans->age = age;

	return (ans);
}

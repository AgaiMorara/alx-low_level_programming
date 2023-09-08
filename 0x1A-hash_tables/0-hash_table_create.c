#include "hash_tables.h"
/**
 *hash_table_create - creates a hash table
 *@size: the size of the array
 *Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ans;
	unsigned long int i;

	ans = malloc(sizeof(hash_table_t));

	if (!ans || size <= 0)
		return (NULL);
	ans->size = size;
	ans->array = calloc(size, sizeof(hash_node_t));

	if (!(ans->array))
	{
		free(ans);
		return (NULL);
	}

	while (i < size)
	{
		ans->array[i] = NULL;
		i++;
	}

	return (ans);
}

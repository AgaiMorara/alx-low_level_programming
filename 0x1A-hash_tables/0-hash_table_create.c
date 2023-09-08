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

	if (size < 1)
		return (NULL);

	ans = malloc(sizeof(hash_table_t));

	if (!ans)
		return (NULL);
	ans->size = size;
	ans->array = malloc(sizeof(hash_node_t) * size);

	if (!(ans->array))
	{
		free(ans);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ans->array[i] = NULL;

	return (ans);
}

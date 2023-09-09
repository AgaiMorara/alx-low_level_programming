#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table we want to add or update the key value
 *@key: is the key. Key cannot be an empty string
 *@value: The associated value with the key. Value must be duplicated..
 *Returns: 1 if succeeded , 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *replicator, *collided;
	char *string;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	index = hash_djb2((const unsigned char *)key);
	string = strdup(value);

	if (!string)
		return (0);
	replicator = malloc(sizeof(hash_node_t));
	if (!replicator)
	{
		free(string);
		return (0);
	}
	replicator->key = strdup(key);
	replicator->value = string;
	replicator->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = replicator;
	}
	else
	{
		collided = ht->array[index];

		while (collided)
		{
			if (strcmp(collided->key, key) == 0)
			{
				free(replicator->key);
				free(replicator->value);
				free(replicator);
				return (1);
			}
			collided = collided->next;
		}
		replicator->next = ht->array[index];
		ht->array[index] = replicator;
	}
	return (1);
}

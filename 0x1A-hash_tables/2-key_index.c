#include "hash_tables.h"

/**
 *key_index - index of a key in the array
 *@key: the key
 *@size: size of the array of the hash table
 *Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size < 1 || !key)
		return (0);
	return (hash_djb2(key) % size);
}

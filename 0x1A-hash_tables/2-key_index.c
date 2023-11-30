#include "hash_tables.h"

/**
 * key_index - This gives the index of a
 * key in a hash table
 * @key: key to find the index of
 * @size: array of indexes
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hsh;

	if (size == 0)
		return (0);

	hsh = hsh_djb2(key);

	return (hsh % size);
}

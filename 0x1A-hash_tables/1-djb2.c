#include "hash_tables.h"

/**
 * hash_djb2 - This hash function implementing
 * the djb2 algorithm
 * @str: string to hash
 *
 * Return: the hash index corresponding to the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int c;

	hsh = 5381;
	while ((c = *str++))
	{
		hsh = ((hsh << 5) + hsh) + c; /* hash * 33 + c */
	}

	return (hsh);
}

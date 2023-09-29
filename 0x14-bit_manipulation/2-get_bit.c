#include "main.h"

/**
 * get_bit - This function returns the value of a bit
 * at a given index
 * @index: the index
 * @n: the number
 *
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t i;

	if (index > sizeof(size_t) * 8)
	{
		return (-1);
	}

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}

	return ((n & 1));
}

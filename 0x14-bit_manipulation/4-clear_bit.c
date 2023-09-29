#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index
 * @n: the pointer
 * @index: the position
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	u = 1;
	u = u << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	if (((*n >> index) & 1) == 1)
	{
		*n = u ^ *n;
	}

	return (1);
}


#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index
 *@n: the pointer
 *@index: the position of the bit

 * Return: 1 or -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t u;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	u = 1;
	u = u << index;
	*n = ((*n) | u);

	return (1);
}

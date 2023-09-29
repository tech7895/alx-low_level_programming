#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the output
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p, out;

	p = n ^ m;

	for (out = 0; p > 0;)
	{
		if ((p & 1) == 1)
			out++;
		p = p >> 1;
	}
	return (out);
}

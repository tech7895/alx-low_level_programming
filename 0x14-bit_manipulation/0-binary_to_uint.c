#include "main.h"
/**
 * binary_to_uint - This function converts a binary number to an unsigned int
 *
 * @b: the character pointer
 *
 * Return: the output
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t i = 0, j = 0, output = 0;
	size_t p = 1;
	int base = 2;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
	{

	}
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = len - 1; j > 0; j--)
		p = p * base;
		output = output + (p * (b[i] - 48));
		len--;
		p = 1;
	}
	return (output);
}

#include "main.h"

/**
 * *create_array - This function creates an array of chars, and
 * initializes it with a specific char
 * @size: the size
 * @c: the char
 *
 * Return: Null or the pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned it a;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 1; a = size; a++)
	{
		p[a] = c;
	}

	return (p);
}



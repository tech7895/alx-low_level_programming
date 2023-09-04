#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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
	unsigned int a;
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
	for (a = 0; ; a++)
	{
		if (a < size)
		{
			p[a] = c;
		}
	}

	return (p);
}



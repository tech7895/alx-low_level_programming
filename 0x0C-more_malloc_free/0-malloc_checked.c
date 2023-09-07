#include "main.h"
#include <stdib.h>

/**
 * *malloc_checked - This function function that allocates memory using malloc
 * @b: size of memory
 *
 * Return: ptr
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - This function reallocates a memory block using malloc and free
 * @ptr: the pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: s
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);

		return (s);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	s = malloc(sizeof(*ptr_copy) * new_size);

	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = s;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;
	free(ptr);
	return (s);
}

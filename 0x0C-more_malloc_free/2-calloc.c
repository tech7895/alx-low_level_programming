#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This function allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the byte size
 *
 * Return: ptr
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *s;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	s = ptr;

	for (a = 0; a < (size * nmemb); a++)
	{
		s[a] = '\0';
	}

	return (ptr);
}

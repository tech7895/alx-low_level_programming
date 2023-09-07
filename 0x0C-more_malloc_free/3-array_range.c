#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: ptr
 *
 */
int *array_range(int min, int max)
{
	int a, b;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;
	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		ptr[a] = min;
		min++;
	}

	return (ptr);
}

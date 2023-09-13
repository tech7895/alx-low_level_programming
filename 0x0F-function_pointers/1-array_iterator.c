#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - This function  executes a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: the size
 * @action: function pointer
 *
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}

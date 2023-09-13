#include "function_pointers.h"

/**
 * int_index - This function  searches for an integer
 * @array: the array
 * @size: the size
 * @cmp: function pointer
 *
 * Return: 0 or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}

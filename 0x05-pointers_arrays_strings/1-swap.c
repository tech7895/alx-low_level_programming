#include "main.h"

/**
 * swap_int - This program swaps the values of two integers,
 * @a: The first integer
 * @b: The second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

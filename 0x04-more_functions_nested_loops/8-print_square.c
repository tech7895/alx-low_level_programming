#include "main.h"
/**
 * print_square - This program prints square with #
 *
 * @size: no of # square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

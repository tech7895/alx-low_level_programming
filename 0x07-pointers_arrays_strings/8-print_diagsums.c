#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: 2d array of int type
 * @size: size of the array (square)
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x];
		sum2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

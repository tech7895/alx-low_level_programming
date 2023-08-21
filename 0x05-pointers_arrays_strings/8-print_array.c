#include "main.h"
#include <stdio.h>
/**
 * print_array - This function prints the n elements of an array
 *@a: array
 *@n: the number of elements in the array
 *
 * Return: void
**/
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
		{
			printf("%d", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
	}

	printf("\n");
}

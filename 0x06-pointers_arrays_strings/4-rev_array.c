#include "main.h"
/**
 * reverse_array - This function reverses an array
 * @a: an array
 * @n: number of element in an array
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int x = 0, temp;

	n = n - 1;

	for (x = 0; x < n; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		n--;
	}
}

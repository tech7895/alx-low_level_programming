#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - This program print n number ascending or descending
 *
 * @n: the output
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
	{
		printf("%d", n);

		if (n == 98)
			continue;
		printf(", ");
	}
	printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}

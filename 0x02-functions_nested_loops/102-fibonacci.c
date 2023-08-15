#include <stdio.h>
/**
 * main - This program prints the first 50 Fibonacci
 * numbers, starting with 1 and 2
 *
 * Return: (0)
 */
int main(void)
{
	int x;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (x = 2; x < 50; x++)
	{
		fibonacci[x] = fibonacci[x - 1] + fibonacci[x - 2];

		if (x == 49)
		{
			printf("%ld\n", fibonacci[x]);
		}
		else
		{
			printf("%ld, ", fibonacci[x]);
		}
	}

	return (0);
}

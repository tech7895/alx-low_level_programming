#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints the multiplication of two numbers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 or 1
 *
 */

int main(int argc, char *argv[])
{
	int n1, n2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;

	printf("%d\n", mult);

	return (0);
}

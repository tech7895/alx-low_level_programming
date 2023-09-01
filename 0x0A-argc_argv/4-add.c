#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program adds positive numbers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 or  1
 *
 */

int main(int argc, char *argv[])
{
	int n, digit, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (digit = 0; argv[n][digit]; digit++)
		{
			if (argv[n][digit] < '0' || argv[n][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return:  0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < i; j++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (j == i - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");
	return (0);
}

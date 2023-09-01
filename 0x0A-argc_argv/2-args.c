#include <stdio.h>

/**
 * main - This program prints all arguments it receives
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}

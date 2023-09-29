#include "main.h"

/**
 * print_bi - This function prints the binary representation of a number
 * @n: the input
 *
 * Return: void
 */
void print_bi(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - This function prints out binary
 * @n: the decimal
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_bi(n);
	}
}

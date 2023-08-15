#include "main.h"
/**
 * print_sign - This program prints the sign of a number
 * @n: is the collector
 * Return: 0 or 1 otherwise
 */
int print_sign(int n)
{
	int x;


	x = -1;
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (x);
	}
}

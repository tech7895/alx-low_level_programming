#include "main.h"
/**
 * print_times_table - This program prints n times table
 * @n: the output
 */
void print_times_table(int n)
{
	int digit, x, result;

	if (n <= 15 && n >= 0)
	for (digit = 0; digit <= n; digit++)
	{
	_putchar('0');
		for (x = 1; x <= n; x++)
		{
		_putchar(',');
		_putchar(' ');
		result = digit * x;
		if (result <= 99)
			_putchar(' ');
		if (result <= 9)
			_putchar(' ');
		if (result >= 100)
		{
		_putchar((result / 100) + '0');
		_putchar(((result / 10) % 10) + '0');
		}
		else if (result <= 99 && result >= 10)
		{
		_putchar((result / 10) + '0');
		}
		_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}

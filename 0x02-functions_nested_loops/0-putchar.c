#include "main.h"
/**
 * main - This program prints _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	char c[] = "_putchar";

	for (x = 0; x < 8; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');

	return (0);
}

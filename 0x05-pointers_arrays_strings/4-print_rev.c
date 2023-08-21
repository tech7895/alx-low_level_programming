#include "main.h"
#include "string.h"
/**
 * print_rev - This program prints a string in reverse,
 * @s: the string
 *
 * Return: void
 *
**/

void print_rev(char *s)
{
	int a;

	for (a = strlen(s) - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}

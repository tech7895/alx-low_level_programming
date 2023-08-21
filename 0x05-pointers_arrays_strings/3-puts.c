#include "main.h"
/**
 * _puts - This program prints a string, followed by a new line, to stdout,
 * @str: the string
 *
 * Return: void
**/

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}

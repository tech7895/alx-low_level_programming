#include "main.h"

/**
* print_alphabet_x10 - This program prints the alphabet, in lowercase
* Ten times
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}

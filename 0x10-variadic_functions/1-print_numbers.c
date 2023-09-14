#include "variadic_functions.h"

/**
 * print_numbers - This functio prints numbers, followed by a new line
 * @separator: the string
 * @n: the number of integers
 * @...: the variable of numbers
 *
 * Return: void
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int a;

	va_start(x, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(x, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(x);
}

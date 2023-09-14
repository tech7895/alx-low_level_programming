#include "variadic_functions.h"

/**
 * print_strings - This fuction prints strings, followed by a new line
 * @separator: the string
 * @n: the number of s
 * @...: the variable of s
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *s;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (a = 0; a < n; a++)
	{
		s = va_arg(ptr_str, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr_str);
}

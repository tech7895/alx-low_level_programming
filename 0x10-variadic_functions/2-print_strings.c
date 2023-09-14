#include "variadic_functions.h"

/**
 * print_s - This fuction prints strings, followed by a new line
 * @separator: the string
 * @n: the number of s
 * @...: the variable of s
 *
 * Return: void
 */

void print_s(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list s;
	unsigned int a;

	va_start(s, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(s);
}

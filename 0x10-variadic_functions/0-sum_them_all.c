#include "variadic_functions.h"

/**
 * sum_them_all - This function  returns the sum of all its parameters
 * @n: The number of arguments
 *
 * Return: sum or 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum;
	

	va_list i;


	if (n == 0)
	{
		return (0);
	}

	
	va_start(i, n);
	sum = 0;

	for (a = 0; a < n; a++)
	{
		sum += va_arg(i, const unsigned int);
	}
	va_end(i);

	return (sum);
}


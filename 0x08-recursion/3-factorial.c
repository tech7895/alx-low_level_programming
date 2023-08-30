#include "main.h"

/**
 * factorial - This function gets the factorial of a number
 *
 * @n: the factor
 *
 * Return: factorial of n or 1.
 *
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

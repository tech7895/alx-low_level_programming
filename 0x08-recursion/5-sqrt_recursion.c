#include "main.h"

/**
 * sqrt_a - This function returns the natural square root of a number
 * @a: input number
 * @b: iterator
 * Return: square root or -1
 *
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: the input number
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

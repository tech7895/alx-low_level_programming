#include "main.h"
/**
 * _isdigit - This program checks if parameter is a digit or character
 * Task 1
 *
 * @c: parameter
 * Return: 1 if its a number and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

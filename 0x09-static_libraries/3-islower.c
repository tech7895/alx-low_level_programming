#include "main.h"
/**
 * _islower - This program prints a function that checks for
 * lowercase character
 * Return: 1 if c is lower otherwise 0.
 *@c: check lower
 */
int _islower(int c)
{
	char a;
	int b = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			b = 1;
		}
	}
	return (b);
}

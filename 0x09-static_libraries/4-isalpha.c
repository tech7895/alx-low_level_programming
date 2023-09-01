#include "main.h"
/**
 * _isalpha - This program checks for alphabetic character
 *
 * Return: 1 if c is a letter or 0 oterwise
 * @c: is the output
 */
int _isalpha(int c)
{
	char low, up;
	int a = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (low == c || up == c)
			{
				a = 1;
			}
		}
	}
	return (a);
}

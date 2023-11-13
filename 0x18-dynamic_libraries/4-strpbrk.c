#include "main.h"

/**
 * *_strpbrk - This function searches a string for any of a set of bytes
 * @s: the string
 * @accept: the bytes
 * Return: s or 0
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}

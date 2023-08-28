#include "main.h"
/**
 * *_strchr - This function  locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: s or 0,
 *
 */
char *_strchr(char *s, char c)
{

	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}

	}

	return (0);
}

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
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s);
		}

	}

	return (0);
}

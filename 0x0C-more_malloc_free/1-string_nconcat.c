#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings up to n bytes
 * @s1: source string
 * @s2: string two
 * @n: number of bytes
 *
 * Return: str
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *str;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}

	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
	{
		b = n;
	}
	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		str[c] = s1[c];
	for (c = 0; c < b; c++)
		str[c + a] = s2[c];
	str[a + b] = '\0';

	return (str);
}

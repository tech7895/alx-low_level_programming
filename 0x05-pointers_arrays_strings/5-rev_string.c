#include "main.h"
#include "string.h"
/**
 * rev_string - This program reverses a string,
 * @s: the string
 *
 * Return: void
 *
**/
void rev_string(char *s)
{
	int a, len = strlen(s), b = 0;
	char temp;

	for (a = len - 1; a >= len / 2; a--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		b++;
	}
}

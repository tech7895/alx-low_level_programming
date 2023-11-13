#include "main.h"
/**
 * *_memset - This function fills memory with a constant byte
 *
 * @s: memory area
 * @b: value
 * @n: the bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}

	return (s);
}

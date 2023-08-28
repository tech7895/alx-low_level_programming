#include "main.h"
/**
 * *_memcpy - This function copies memmory area
 * @dest: destiation
 * @src: source
 * @n: the n bytes
 *
 * Return: dest,
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}

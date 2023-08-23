#include "main.h"

/**
 * *_strncat - This function concatenates two strings
 * with exception
 *@n: length
 *@dest: destiation
 *@src: source
 *Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int a;

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[l + a] = src[a];
		src++;
	}
	dest[l + a] = '\0';

	return (dest);
}



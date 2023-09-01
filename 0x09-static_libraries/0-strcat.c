#include "main.h"

/**
 * *_strcat - This function concatenates two strings
 * @dest: The destination
 * @src: The source
 * Return: void
 *
 */
char *_strcat(char *dest, char *src)
{
	int lendest = 0;
	int lensrc = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		lendest++;
	for (a = 0; src[a] != '\0'; a++)
		lensrc++;
	for (a = 0; a <= lensrc; a++)
		dest[lendest + a] = src[a];

	return (dest);
}



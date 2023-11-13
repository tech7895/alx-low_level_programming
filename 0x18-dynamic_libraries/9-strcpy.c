#include "main.h"
/**
 * _strcpy - This function copies the string pointed
 * @dest: copy of the string
 * @src: origin of the string
 * Return: dest (Success)
**/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';

	return (dest);
}

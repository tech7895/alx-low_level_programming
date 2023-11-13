#include "main.h"
/**
 * _strlen - This program returns the length of @s
 * @s: the string
 * Return: length of @s
 *
**/
int _strlen(char *s)
{
		int l;

		for (l = 0; s[l] != '\0'; l++)
			;

		return (l);
}

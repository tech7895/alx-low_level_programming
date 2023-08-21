#include "main.h"
/**
 * _strlen - This program returns the length of a string,
 * @str: The string
 *
 * Return: The length of @str
 *
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - This function concatenates two strings up to n bytes
 * @s1: source string
 * @s2: string two
 * @n: number of bytes
 *
 * Return: p
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1count, s2count, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	s2count > n ? (s2count = n) : (n = s2count);
	sizeBuffer = s1count + s2count + 1;
	ptr = malloc(sizeBuffer * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer - 1; i++)
		i < s1count ? (ptr[i] = s1[i]) : (ptr[i] = s2[i - s1count]);
	ptr[sizeBuffer] = '\0';

	return (ptr);
}

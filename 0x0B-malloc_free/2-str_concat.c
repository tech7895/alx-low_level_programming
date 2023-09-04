#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This fuction concatenates two strings.
 * @s1: The firt string
 * @s2: The string.
 *
 * Return: the pointer otherwise  NULL.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b = 0, len = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a]; a++)
		concat_str[b++] = s1[a];

	for (a = 0; s2[a]; a++)
		concat_str[b++] = s2[a];


	return (concat_str);
}

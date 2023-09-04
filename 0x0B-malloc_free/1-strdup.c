#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly-allocated space
 * in a memory
 * @str: The string to be copied.
 *
 * Return:  NULL or a pointer
 */

char *_strdup(char *str)
{
	int a, len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		duplicate[a] = str[a];

	duplicate[len] = '\0';

	return (duplicate);
}

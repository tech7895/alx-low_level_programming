#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - This function concatenates all the arguments of your program
 * @ac: argument cou
 * @av: argument vector
 *
 * Return: a pointer or NULL
 *
 */
char *argstostr(int ac, char **av)
{
	int i, n;
	int k = 0, len = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			a[k] = av[i][n];
			k++;
		}
		if (a[k] == '\0')
		{
			a[k++] = '\n';
		}
	}

	return (a);
}

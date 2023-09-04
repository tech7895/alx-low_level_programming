#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - This is the main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}


/**
 * **strtow - This function  splits a string into words
 * @str: the sring
 *
 * Return: NULL
 *
 */
char **strtow(char *str)
{
	size_t c, height, i, j, a1;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		a = malloc((height + 1) * sizeof(char *));
	}
		if (a == NULL || height == 0)
		{
			free(a);
			return (NULL);
		}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				a[i] = malloc((c - a1 + 2) * sizeof(char));
				if (a[i] == NULL)
				{
				ch_free_grid(a, i);
				return (NULL);
				}
				break;
			}

		}
		for (j = 0; a1 <= c; a1++, j++)
			a[i][j] = str[a1];
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}

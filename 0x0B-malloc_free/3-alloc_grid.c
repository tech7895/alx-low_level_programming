#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer to,
 * a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer or NULL
 *
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(width * sizeof(int));
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;


	return (gridout);
}

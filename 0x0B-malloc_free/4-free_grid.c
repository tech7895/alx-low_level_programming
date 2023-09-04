#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a 2-dimensional array of integers,
 * @grid: the 2-dimensional array
 * @height: The height of grid
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}

# include "main.h"
# include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: the matrix to free
 * @height: rows of the matrix
 * Return: pointer to the space allocated
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

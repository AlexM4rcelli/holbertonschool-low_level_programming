# include "main.h"
# include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 * @width: columns of the matrix
 * @height: rows of the matrix
 * Return: pointer to the space allocated
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	if (!matrix)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix);
			}
			free(matrix);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}

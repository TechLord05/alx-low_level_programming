#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a two-dimensional grid of integers
 *
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the created grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

		if (grid[row] == NULL)
		{
			/* Free previously allocated memory */
			for (; row >= 0; row--)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}

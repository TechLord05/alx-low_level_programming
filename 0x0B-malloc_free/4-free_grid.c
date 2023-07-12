#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array.
 * @grid: Pointer to a 2D array.
 * @height: Height dimension of the grid.
 *
 * Description: This function frees the memory allocated for a 2D array.
 * It iterates over each row of the grid and frees the memory of each row.
 * Finally, it frees the memory allocated for the grid itself.
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

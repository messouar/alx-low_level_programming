#include "main.h"

/**
 * free_grid - frees grid previously created by your alloc_grid
 * @grid: pointer to 2 dimentions grid
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

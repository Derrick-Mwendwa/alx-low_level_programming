#include <stdlib.h>

/**
 * free_grid - free created 2 dimensional grid
 * @grid: pointer to 2 dimensional grid
 * @height: height
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

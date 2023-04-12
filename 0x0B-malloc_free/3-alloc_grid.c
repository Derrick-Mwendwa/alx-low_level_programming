#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - makes a 2 dimensional pointer of int
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 *
 * Return: 2 dimensional pointer otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

#include "main.h"
#include <stdio.h>
/**
 * free_grid - free up a two dim grid created in alloc_grid
 * @grid: the TwoDim to be freed
 * @height: the grid height
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

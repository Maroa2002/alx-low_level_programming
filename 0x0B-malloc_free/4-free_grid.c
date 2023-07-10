#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free a 2D dimensional grid
  * @grid: input 2D grid
  * @height: rows
  * Return: nothing
  **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

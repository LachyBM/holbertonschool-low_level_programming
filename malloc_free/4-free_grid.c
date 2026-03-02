#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid- grid
 * @width: int width of grid
 * @height: int highet of grid
 * Return: grid with locations
 */

void free_grid(int **grid, int height)
{

	int i = 0;
	
	if (grid == NULL)
		return;

	while (i < height)
		{
			free(grid[i]);
			i++;
		}

	free(grid);
}

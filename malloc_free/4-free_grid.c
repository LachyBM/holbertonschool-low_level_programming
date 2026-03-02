#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **free_grid- grid
 * @grid: grid
 * @height: int highet of grid
 * Return: if grid NULL
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

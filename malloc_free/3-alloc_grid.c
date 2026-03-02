#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid- grid
 * @width: int width of grid
 * @height: int highet of grid
 * Return: grid with locations
 */

int **alloc_grid(int width, int height)
{

	int i = 0;
	int j;
	int **grid = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

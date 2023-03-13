#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free_grid
 * @grid: input
 * @height: input
 * Return: Result
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

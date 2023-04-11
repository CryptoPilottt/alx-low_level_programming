#include "main.h"

/**
 *free_grid - function that frees a 2 dimensional grid in previous question
 *@grid: second grid
 *@height: height dimension of grid
 *Return: 0 if successful
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

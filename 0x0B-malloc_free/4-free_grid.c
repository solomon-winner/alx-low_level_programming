#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: parameter
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}

	free(grid);
}

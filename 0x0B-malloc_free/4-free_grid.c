#include"main.h"
/**
 * free_grid - it 2 dimensional array of integers
 * @grid: integer number
 * @height: integer number
 *Return:pointer character
 */

void free_grid(int **grid, int height)
{
int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}


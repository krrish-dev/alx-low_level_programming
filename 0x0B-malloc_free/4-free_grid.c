#include "main.h"

/**
 * free_grid - Frees a 2D grid of integers.
 * @grid: The grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * This function frees the memory allocated
 * for a 2D grid of integers.
 * It first frees the memory for each row
 * and then frees the grid itself.
*/
void free_grid(int **grid, int height)
{
    int row = 0;

    for (; row < height; row++)
        free(grid[row]);
    free(grid);
}


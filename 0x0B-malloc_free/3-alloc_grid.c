#include "main.h"

/**
 * alloc_grid - Allocates and returns a pointer to a 2D array of integers.
 * @width: The width (number of columns) of the 2D array.
 * @height: The height (number of rows) of the 2D array.
 *
 * This function dynamically allocates memory for a 2D array of integers with
 * the specified width and height.
 * Each element of the array is initialized to 0.
 *
 * Return: If memory allocation is successful,
 * returns a pointer to the newly
 *         created 2D array.
 * If width or height is less than or equal to 0, or if
 *         memory allocation fails, returns NULL.
*/


int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				/*Free everything if malloc fails*/
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}

	return (tab);
}

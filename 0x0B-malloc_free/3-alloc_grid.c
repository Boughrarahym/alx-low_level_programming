#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid, h, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
	{
		for (b = 0; b < h; b++)
		free(grid[b]);
		free(grid);
		return (NULL);
	}
		for (b = 0; b < width; b++)
		grid[h][b] = 0;
	}

	return (grid);
}

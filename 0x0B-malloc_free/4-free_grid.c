#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated to a 2D integer array
 * @grid: Pointer to the 2D integer array to free
 * @height: Height of the 2D integer array
 *
 * Description: Frees the memory allocated to a 2D integer array.
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
	free(grid[row]);
	}
	free(grid);
}

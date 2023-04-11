#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **gee;
	int l, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	gee = malloc(sizeof(int *) * height);

	if (gee == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		gee[l] = malloc(sizeof(int) * width);

		if (gee[l] == NULL)
		{
			for (; l >= 0; l--)
				free(gee[l]);

			free(gee);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
			gee[l][m] = 0;
	}

	return (gee);
}


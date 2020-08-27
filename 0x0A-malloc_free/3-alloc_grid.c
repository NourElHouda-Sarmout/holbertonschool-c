#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-D array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-D array.
 * @height: The height of the 2-D array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-D array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **2_D;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	2_D = malloc(sizeof(int *) * height);

	if (2_D == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		2_D[h_index] = malloc(sizeof(int) * width);

		if (2_D[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(2_D[h_index]);

			free(2_D);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			2_D[h_index][w_index] = 0;
	}

	return (2_D);
}

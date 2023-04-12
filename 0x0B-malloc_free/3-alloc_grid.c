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
	int **luv;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	luv = malloc(sizeof(int *) * height);

	if (luv == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		luv[x] = malloc(sizeof(int) * width);

		if (luv[x] == NULL)
		{
			for (; x >= 0; x--)
				free(luv[x]);

			free(luv);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			luv[x][y] = 0;
	}

	return (luv);
}

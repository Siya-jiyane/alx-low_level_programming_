#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make the grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **gil;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	gil = malloc(sizeof(int *) * height);

	if (gil == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		gil[x] = malloc(sizeof(int) * width);

		if (gil[x] == NULL)
		{
			for (; x >= 0; x--)
				free(gil[x]);

			free(gil);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			gil[x][y] = 0;
	}

	return (gil);
}

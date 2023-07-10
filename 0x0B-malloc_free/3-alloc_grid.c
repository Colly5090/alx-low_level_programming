#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that point to a two dimentional array
 * @width: width input of the array
 * @height: height input of the array
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));
		if (arr[x] == NULL)
		{
			for (x = 0; x >= 0; x--)
				free(arr[x]);

			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	return (arr);
}

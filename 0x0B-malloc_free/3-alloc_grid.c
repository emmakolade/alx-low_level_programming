#include "mainh"
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * height);

	if (twoDim == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		twoDim[h] = malloc(sizeof(int) * w);

		if (twoDim[h] == NULL)
		{
			for (; h >= 0; h--)
				free(twoDim[h]);

			free(twoDim);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			twoDim[h][w] = 0;
	}

	return (twoDim);
}

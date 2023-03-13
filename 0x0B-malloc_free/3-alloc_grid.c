#include "main.h"

/**
 * alloc_grid - returns a pointer
 * @width: width
 * @height: height
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int x = 0;
	int y = 0;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	while (y < height)
	{
		a[y] = malloc(sizeof(int) * width);

		if (a[y] == NULL)
		{
			for (y += 1; y >= 0; y--)
				free(a[y]);
			free(a);
			return (NULL);
		}
		y++;
	}
	for (y = 0; x < width; x++)
		a[y][x] = 0;
	return (a);
}

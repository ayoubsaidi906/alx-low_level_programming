#include <stdlib.h>
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers.
 * @width: Integer
 * @height: Integer
 * Return: Integer
 */
int **alloc_grid(int width, int height)
{
	int a, b, **p;

	if (width <= 0 || height <= 0)
		return (0);
	p = (int **) malloc(sizeof(int *) * height);
	if (p == 0)
	{
		free(p);
		return (0);
	}
	for (a = 0; a < height; a++)
	{
		*(p + a) = (int *) malloc(sizeof(int) * width);
		if (*(p + a) == 0)
		{
			for (b = 0; b < a; b++)
			{
				free(*(p + b));
			}
			free(p);
			return (0);
		}
		for (b = 0; b < width; b++)
		{
			*(*(p + a) + b) = 0;
		}
	}
	return (p);
}
